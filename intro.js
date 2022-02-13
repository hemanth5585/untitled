//print
console.log("Hello JS");
//declare a variable
/*let a;
//by default undefined
// Java script tells you only that it is a variable not its type
a = 10;
console.log("variable contains",a);
a = 10.0;
a = "I am a string";
a = "I am also a string";
console.log("variable contains",a);*/
//variable types: Primitive data types: Number [no float 2+2 = 4 and 5/2 = 2.5 no integer or decimal], string, boolean, null
// Javascript is syntactically similar to java
/*let number  = 10;
for(let i=0;i<number;i++)
{
    console.log(i);
}*/
let number = 10;
let flag=0;
for(let i=2;i<number;i++)
{
    if(number%i==0)
    {
        flag=1;
        break;
    }
}
if(flag)
console.log("Not prime");
else
console.log("Prime");
