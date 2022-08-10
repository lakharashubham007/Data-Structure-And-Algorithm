function majorityElement(a, size) {
  //your code here
  let count = 0;
  let res = 0;
  for (let i = 0; i < size; i++) {
    if (count == 0) res = a[i];
    if (res == a[i]) count++;
    else count--;
  }
  count = 0;
  for (let i = 0; i < size; i++) {
    if (a[i] == res) count++;
  }
  if (count > size / 2) return res;
  else return -1;
}

let n = 5;
let arr = [3,1,3,3,2]; 

console.log(majorityElement(arr, n));
