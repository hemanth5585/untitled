// Non primitive - Arrays, functions, objects
/*function fun() {
    console.log("Inside funtion");
    return 10;
}
let n = fun();
console.log(n);
function add(a,b)
{
    console.log("inside function\n recevied parameters ",a,b);
    console.log(a+b);
}
add(2,3);*/
function random()
{
    let n = Math.random();
    if(n>0 && n<=10)
        return n;
    return n;
}
let n = random();
console.log(n);