let myArray=[1,2,4,5,6,7,5,7]
function sum(numbers)
{
    let sum=0;
    for(let i=0;i<numbers.length;i++)
    {
        sum+=numbers[i];
    }
    return sum;
}
let answer=sum(myArray);
console.log(answer)