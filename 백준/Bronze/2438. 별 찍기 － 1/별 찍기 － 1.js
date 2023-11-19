const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdoutd
});

let input = [];

rl.on('line', function (line) {
    input = [line];
}).on('close',function(){
    str = input[0];
    let tmp = parseInt(str)
    for (let i = 0; i < tmp; ++i) {
        for (let j = 0; j <= i; ++j) {
            process.stdout.write('*');
        }
        process.stdout.write('\n');
    }
});