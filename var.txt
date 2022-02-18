/*
    let - it is a block scoped varialbe
    var - the variable is declared globally and it is block scoped
            only in functions
    cont  - variables declared with const cannot be reassigned
            these variables cannot be reallocated
            these are block scoped
            VALUE of CONST VARIABLE DOESNOT CHANGE
*/
let a = 10;
if (a == 10) {
    var x = 20;
    console.log("Inside function ", x);
}
console.log(x);  //prints 20

/*      var b = 15;
        if (b == 15) {
            let y = 30;
        }
        console.log(y); //throws error
*/
const c = 10;
console.log(c);
c = 20;  // throws error