/*
This module is used to create, read and delete, update a file
*/
/*
For Files:
    Create
        -> openSync()
    Update
        ->appendSync();
    Delete
        ->unlinkSync();
    Read
        ->readFileSync()
For Folders:
    Create
        ->mkdirSync();
    Read
        ->readdirSync();
    Delete
        ->rmdirSync();

    exsistSync() = does a file or folder exsist
        Return Boolean -> true or false
    lstatSync() =  is the choosen path file or folder
        Returns Object
        obj.isFile();
        obj.isFolder();        
*/
let fs = require("fs");
const { fileURLToPath } = require("url");
//let bu = fs.readFileSync("abc.js");
//console.log("In file" + bu);

//create a file
//fs.openSync("abc.txt", "w");

//weriteFileSync no file -> Then create the file, file exsists -> Replace whole content

//fs.writeFileSync("abc.txt", "Writing something in the text file using node fileSystem module");
// Updates the file
//fs.appendFileSync("abc.txt", "Update 1");

//create a folder
/*
//fs.mkdirSync("NayaFolder");
//create a new file in the directory
//fs.openSync("NayaFolder/untitled.txt", "w");
// Read all files in directory
fs.appendFileSync("NayaFolder/untitled.txt", "Appended");
let out = fs.readdirSync("NayaFolder");
console.log(out);
for (let i = 0; i < out.length; i++) {
    console.log(out[i]);
    //fs.unlinkSync("NayaFolder/"+content[i]);
}
//remove folder 
//  - >  fs.rmdirSync("NayaFolder");
// - >   fs.existsSync("")  -> takes path as parameter and returns true if fs.exists 
// - >   fs.lstatSync("")  -> to check if path belongs to folder or file --->> returns object.
let doesFileExsist = fs.existsSync("abc.txt");
console.log(doesFileExsist);
let obj = fs.lstatSync(__dirname + "\\fileSystem.js");
let ans = obj.isDirectory();
console.log(ans);*/






