let path = require("path");

/*----Discussing Path-------
    Creating 10 folders and creating a file in all the folders

for (let i = 1; i <= 10; i++) {
    let dirPath = `Lecture - ${i}`;
    fs.mkdirSync(dirPath);
    fs.writeFileSync(path.join(dirPath + "\\" + "readme.md"), `#readme for ${dirPath}`);
}
Path.join is to avoid cross platform errors in Node
Delete all folder and excute for more details
*/
let ext = path.extname(path.join(__dirname, "abc.js"));
console.log(ext);
let name = path.basename(__dirname);
console.log(name);
//  line 15 and 16 returns the directory name of current file
name = path.basename(path.join(__dirname, "abc.js"));
console.log(name);
// line 19 and 20 prints the file nam where we are right now which is base