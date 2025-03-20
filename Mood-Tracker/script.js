// Select all mood buttons
const moods = document.querySelectorAll(".moods .button");
// Select the delete logs button
const delButton = document.querySelector("#delete-logs");
// Select the main container where elements will be displayed
const container = document.querySelector(".container");

// Create a paragraph element to display the selected mood
const moodDisplay = createElement("p", { class: "moodDisplay" });
container.appendChild(moodDisplay);

// Create a container to display logged moods
const logContainer = createElement("div", { class: "logContainer" });
container.appendChild(logContainer);

// Retrieve saved mood logs from localStorage or initialize an empty array
let moodLogs = JSON.parse(localStorage.getItem("moodLogs")) || [];
updateMoodDisplay(localStorage.getItem("selectedMood")); // Show the last saved mood
updateLogDisplay(); // Show previous logs

// Show confirmation prompt when delete button is clicked
delButton.addEventListener('click', confirmation);

// Add event listener to each mood button
moods.forEach(mood => {
    mood.addEventListener('click', () => {
        const now = new Date();
        const date = now.toLocaleDateString("en-IN", { day: "2-digit", month: "2-digit", year: "numeric" });
        const time = now.toLocaleTimeString("en-IN", { hour: "2-digit", minute: "2-digit", hour12: true });

        saveMood(mood.textContent, date, time);
    });
});

// Function to create an HTML element with attributes and text
function createElement(tag, attributes = {}, text = "") {
    const element = document.createElement(tag);
    Object.entries(attributes).forEach(([key, value]) => element.setAttribute(key, value));
    element.textContent = text;
    return element;
}

// Function to update the displayed mood
function updateMoodDisplay(mood) {
    moodDisplay.textContent = mood ? `You are feeling ${mood}` : "";
}

// Function to save the selected mood in localStorage and update the UI
function saveMood(mood, date, time) {
    localStorage.setItem("selectedMood", mood);
    moodLogs.push({ mood, date, time });
    localStorage.setItem("moodLogs", JSON.stringify(moodLogs));

    updateMoodDisplay(mood);
    updateLogDisplay();
}

// Function to update the log display with saved moods
function updateLogDisplay() {
    logContainer.innerHTML = "<h3>Your Mood swings throughout the day 🫣:</h3>";

    if (!moodLogs.length) {
        logContainer.innerHTML += "<p>Please enter your mood :</p>";
        return;
    }

    let lastDate = "";
    moodLogs.forEach(log => {
        // If the date changes, add a new heading for that date
        if (log.date !== lastDate) {
            const dateEntry = document.createElement("h4");
            dateEntry.textContent = log.date;
            logContainer.appendChild(dateEntry);
            lastDate = log.date;
        }
        
        // Add a log entry for the mood with its timestamp
        const logEntry = document.createElement("p");
        logEntry.textContent = `${log.time} - ${log.mood}`;
        logContainer.appendChild(logEntry);
    });
}

// Function to clear all saved mood logs
function clearLogs() {
    localStorage.removeItem("selectedMood");
    localStorage.removeItem("moodLogs");
    moodLogs = [];

    updateMoodDisplay(null);
    updateLogDisplay();
    messageDeleted(); // Show alert message

    // Hide the confirmation card
    document.querySelector("#confirmation-card").style.display = "none";
}

// Function to show confirmation before deleting logs
function confirmation() {
    document.getElementById("confirmation-card").style.display = "block";

    // Add event listeners to confirm or cancel deletion
    document.getElementById("confirm").addEventListener('click', clearLogs);
    document.getElementById("Cancel").addEventListener("click", function () {
        document.querySelector("#confirmation-card").style.display = "none";
    });
}

// Function to show a temporary message after logs are deleted
function messageDeleted() {
    document.querySelector(".alert-card").style.display = "block";

    // Hide alert message after 3 seconds
    setTimeout(() => {
        document.querySelector(".alert-card").style.display = "none";
    }, 3000);
}