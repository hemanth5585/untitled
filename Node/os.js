/*
We use this module to check the system or the server internal properties
For example: If there are alreadu 9 processes running on the server, then if you want to run the 
10th process then you NEED some RAM and STORAGE to run that process, so to check the features we use OS 
module.
*/
let os = require("os");
console.log(os.arch());
console.log(os.platform());
console.log(os.networkInterfaces());
console.log(os.cpus());