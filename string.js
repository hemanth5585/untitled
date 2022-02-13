let singleQuote = 'this is single quote string';
let doubleQuote = "this is double quote string";
console.log(singleQuote);
console.log(doubleQuote);
/*let c = singleQuote.charAt(5);
let f = singleQuote.substring(1, 8);
console.log(c);
console.log(f);
let ascii = singleQuote.charCodeAt(5);
//charCodeAt(x)   - returns ASCII code of that character
console.log(ascii);*/
// ------------------------------------------------
/*
    trim() function is used to remove the extra spaces at begining and ending of a string
    Ex: "   abcd    ";
    Usecase: This is used when matching a string with something in the backend
    all the extra spaces at begining and at the ending are removed
    SYNTAX: str.trim();
*/
let arr = singleQuote.split("i");
console.log(arr);
/* split("character")  - this function splits the string before and after of the given character
                        and store it into an array and returns the array
                        refer output for more detail*/
let str = arr.join("+");
console.log(str);
/*
    What join function does is basically when spilt function is spiltting the string based on the characters
    now join will join all the string in the string array by adding the given character at the end of each
    element in string array and return a string.
    REFER EXAMPLE FOR MORE.
*/