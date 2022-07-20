/*Problem Description
Given the heights of n students of a class, 
find the average height. 
Your answer should be accurate upto 5 decimal places.*/ 


function averageHeight(n ,arr) {
    var sum = 0;
    for(var i=0; i<n; i++ ) sum += arr[i];

    return parseFloat(sum/n);

}

function main(){
    let n = 6;
    let arr = [2.2, 1 ,3, 1.9, 2.4, 1.7];
    let result = averageHeight(n, arr);
    console.log(result);
}

main();


/** 
Sample Input 1
6

2.2 1 3 1.9 2.4 1.7

Sample Output 1
2.033333
 * 
*/