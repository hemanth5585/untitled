//arrays
    let arr = [1, 2, 3];
console.log(arr);
console.log(arr.length);
//arrays functions
//push to add at last
//unshift to add at first
arr.push("last thing");
arr.unshift("first thing");
console.log(arr);
//shift to remove first element in an array
//pop  to remove last element in an array
//slice(start,end) -  to print the element in start and end indexes. [including start and end].
//if ending index is not provided then from start index whole array is printed
//if end index is not present then it prints upto the available elements
console.log(arr.slice(1));
/*
splice(start,count) - this function lets to delete the element from start index [including start] and deletes
                        the count number of elements. 
*/
arr.splice(0, 2);
console.log(arr);
