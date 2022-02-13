let cp = require("child_process");
//cp.execSync("start chrome");
let o = cp.execSync("node abc.js");
console.log("inside " + o);