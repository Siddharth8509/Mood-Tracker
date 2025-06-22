const arr=[1,2,3,4,5,6,7]

// if(!Array.prototype.Myforeach){
//     Array.prototype.Myforeach=function(userFn)
//     {
//         const originalArr=this; //points to the object that user has defined points to the current context

//         for(let i=0;i<originalArr.length; i++)
//         {
//             userFn(originalArr[i],i);
//         }
//     }
// }
// arr.Myforeach(function(value,index){
//     console.log(`value at index ${index} is ${value}`)
// });
// if(!Array.prototype.Mymap)
// {
//     Array.prototype.Mymap= function (userFn)
//     {
//         const result=[]

//         for(let i=0;i<this.length;i++)
//         {
//             const value=userFn(this[i],i);
//             result.push(value)
//         }
//         return result;
//     }
// }

// const n2=arr.Mymap((i)=>i*3)
// console.log(n2)
if(!Array.prototype.Myfilter)
{
    Array.prototype.Myfilter=function (userFn)
    {
        const result=[]

        for(let i=0;i<this.length;i++)
        {
            if(userFn(this[i])==true)
            {
                result.push(this[i])
            }
        }
        return result
    }
}

const n2=arr.Myfilter((e)=>e%2==0)
console.log(n2)