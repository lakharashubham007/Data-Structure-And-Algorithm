function printArray(arr, size) {
  let i;
  let s = "";
  for (i = 0; i < size; i++) {
    s += arr[i] + " ";
  }
  console.log(s);
}

class Solution {
  //Function to sort the binary array.
  binSort(A, N) {
    //your code here
    let low = 0,
      high = N - 1;

    //Using segregation method.
    while (low <= high) {
      //If element at left index is 0, we increase the left index.
      if (A[low] == 0) {
        low++;
      }
      //Else If element at high index is 1, we decrease the right index.
      else if (A[high] == 1) {
        high--;
      }
      //Else, we swap the elements at left and right index.
      else {
        let temp = A[low];
        A[low] = A[high];
        A[high] = temp;
        //Updating values of left and right index after swapping.
        low++;
        high--;
      }
    }
  }
}

let A = [1, 1, 1, 1, 0, 0, 0, 0];
let N = A.length;

let obj = new Solution();
obj.binSort(A, N);
printArray(A, N);
