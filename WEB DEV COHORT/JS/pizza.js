// let guest=4;

// if(guest===4)
// {
//     console.log("Get a medium pizza");
// }
// else if(guest>=2)
// {
//     console.log("Get a small pizza");
// }
// else
// {
//     console.log("Get a large pizza");
// }


let guest=4;

let pizzasize;

if(guest<=2)
{
    pizzasize="Small";
}
else if(guest<=5)
{
    pizzasize="Medium";
}
else
{
    pizzasize="Large";
}

console.log(pizzasize);