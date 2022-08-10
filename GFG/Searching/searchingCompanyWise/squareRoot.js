function floorSqrt(x) {
  // Base cases
  if (x == 0 || x == 1) return x;

  let start = 1;
  let end = x;
  let ans;
  while (start <= end) {
    let mid = Math.floor((start + end) / 2);
    if (mid * mid == x) return mid;

    if (mid * mid < x) {
      start = mid + 1;
      ans = mid;
    } else end = mid - 1;
  }
  return ans;
}

let x = 64;
console.log(floorSqrt(x));


/*
Asked In:
Accolite
Amazon
Flipkart
Microsoft
VMWare
*/ 