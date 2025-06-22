#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter an alphabet: ";
    cin >> alphabet;
    // Check if the entered character is an alphabet
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) 
    {
    // Check if the entered alphabet is a vowel
        if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
            alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
            cout << "The entered alphabet is a vowel." << endl;
        } else
        {
            cout << "The entered alphabet is a consonant." << endl;
        }
    } else 
    {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }

    return 0;
}
       