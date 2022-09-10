//1st method
//XOR opration
int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

//2nd method 
//comapre all element with each other and find unique.

 int findUnique(int *arr, int size){
    for(int i=0; i<size; i++)  {
       
        int a = arr[i], count=0;
        
         for(int j=0; j<size; j++) {
            if(a == arr[j]) {
                count++;
            }
        }
        if(count == 1)  {            
            return a;
       }
   }
 }
