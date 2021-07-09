const MAX = 46;
const MIN = 1

let result = new Array();

while (result.length < 6) {
    let rand = Math.floor(Math.random() * (MAX - MIN) + MIN);
    if ( result.indexOf(rand) == -1 ) result.push(rand);
}
result.sort((a, b) => { return a - b; });
console.log(`JS => [ ${ result[0] }, ${ result[1] }, ${ result[2] }, ${ result[3] }, ${ result[4] }, ${ result[5] } ]`);