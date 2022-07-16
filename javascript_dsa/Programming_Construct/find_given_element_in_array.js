function findElement(n, arr, x) {
    let currIdx = 0;// Store index value variable
    
      //loop for 0 to n index
      while(currIdx < n){
          //condition for match element to the x
          if(arr[currIdx]==x){
              //if number match from the index return indexes
              return currIdx;
          }
          //if not match with current index go to next one
          currIdx++;
      }
      // if all the indexes traverces and not find then return -1.
      return -1;
      
  }

  let n = 5
  let arr = [1,3,4,2,1];
  let x = 4;
  let result = findElement(n, arr, x);
  console.log(result);