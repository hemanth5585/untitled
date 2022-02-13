let s = "i am learning java script";
let a = s.split(" ");
let m = 0;
for (let i = 0; i < a.length; i++) {
    let x = a[i].length;
    if (x > m) {
        m = x;
    }
}
console.log(m);