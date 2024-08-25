//{ Driver Code Starts
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split('\n').map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    for (let i = 0; i < t; i++) {
        let x = parseInt(readLine());
        let input_line = readLine().split(' ');
        let arr = input_line.map(num => parseInt(num));

        let obj = new Solution();
        let ans = obj.getFloorAndCeil(x, arr);
        console.log(ans[0], ans[1]);
    }
}

// } Driver Code Ends


// User function Template for javascript

class Solution {
    getFloorAndCeil(x, arr) {
        // code here
        arr.sort((a,b) => {return a-b});
        let floor = -1;
        let ceil = -1;
        let array = [];
        for(let i = 0; i < arr.length; i++) {
            if(arr[i] >= x) {
                ceil = arr[i];
                break;
            }
        }
        for(let j = (arr.length - 1); j >= 0; j--) {
            if(arr[j] <= x) {
                floor = arr[j];
                break;
            }
        }
        array.unshift(ceil);
        array.unshift(floor);
        return array;
    }
}
