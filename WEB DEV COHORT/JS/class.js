// class person
// {
//     constructor(fName,lName)
//     {
//         this.fName=fName;
//         this.lName=lName;     
//     }
//     getFullName()
//     {
//         return `${this.fName} ${this.lName}`;
//     }
// }

// const p1 = new person('Siddharth','Roy');
// const p2 = new person('Sahil','Kumar');

// console.log(p1.getFullName());
// console.log(p2.getFullName());

// const obj1=
// {
//     fName:"Siddharth",
//     lName:"Roy",
//     getFullName:function()
//     {
//         if(this.lName !== undefined) return `${this.fName} ${this.lName}`;
//         return `${this.fName}` ;
//     }
// }

// const obj2=
// {
//     fName:"Sahil",
//     lName:"Kumar",
// }
// obj2.__proto__=obj1;
// // obj1.__proto__=null;

// console.log(obj1.getFullName());
// console.log(obj2.getFullName());
// console.log(obj2.toString());
class A
{
    funInsideA() {}
}
class B
{
    funInsideB(){}
    B.__proto__=A;
}
const b=new B();
console.log(B.funInsideA());