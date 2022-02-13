//object is group of key value pair
//in key value pair value is called property
//in object function is called as method

let obj = {
    name: "H",
    lName: "k",
    address: {
        city: "Hyd",
        state: "ts",
    },
    skills: ["c++", "c", "ds"],
    fun: function () {
        console.log("Inside object method");
    }
};
console.log(obj.lName);
console.log(obj.skills);
obj.fun();
//SET and UPDATE
obj.state = "Delhi";
obj.laptop = "Dell";
console.log(obj.laptop);
console.log(obj.state);
console.log(obj);
/*//delete key
delete cap.skills;
*/
//loop in objects
/*for (let key in obj) {
    console.log(key, " ", obj[key]);
}*/
