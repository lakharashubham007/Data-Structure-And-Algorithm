//swap function

function swap(arr,i,j) {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}



//partition  function

function partition(arr, low, high) {

    let pivot = arr[high];

    let i = (low-1);

    for(let j = low; j<= high-1; j++){
        if(arr[j] < pivot) {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr, i+1,high);
    return (i+1);
}


//function that implement quickSort

function quickSort(arr,low,high){
  if(low < high) {
    let pi = partition(arr, low, high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}

//Function to print an array
function printArray(arr, size){
    for(let i = 0; i < size; i++)
     document.write(arr[i] + " " );

     document.write("<br>");
}


//Driver Code

let arr = [10 ,7, 8, 9, 1, 5];
let n = arr.length;

//sort function
quickSort(arr, 0, n-1);
document.write("Sorted Array : <br>");

//print function
printArray(arr,n);
