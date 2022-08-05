// { Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       
        int low = 0, high = N-1;
        
        //Using segregation method.
        while(low <=  high){
            
            //If element at left index is 0, we increase the left index.
            if(A[low] == 0){
                low++;
            }
            //Else If element at high index is 1, we decrease the right index.
            else if(A[high] == 1){
                high--;
            }
            //Else, we swap the elements at left and right index.
            else{
                int temp = A[low];
                A[low] = A[high];
                A[high] = temp;
                //Updating values of left and right index after swapping.
                low++;
                high--;
            }
        }
    }
};

// { Driver Code Starts.
int main() {
	
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	
	return 0;
}



  // OPTIMIZED APPROACH

  

  /* 
https://www.geeksforgeeks.org/sort-binary-array-using-one-traversal/

Approach: This concept is related to partition of quick sort . In quick sort partition, after one scan, the left of the array is smallest and right of the array is the largest of selected pivot element.
Algorithm: 
 

Create a variable index say j = -1
Traverse the array from start to end
If the element is 0 then swap the current element with the element at index( jth ) position and increment the index (j) by 1.
If the element is 1 keep the element as it is.



  

  QUICK SORT APPROACH
  
   void binSort(int A[], int N)
    {
       
      int j = -1;
    for (int i = 0; i < N; i++) {
 
        // if number is smaller than 1
        // then swap it with j-th number
        if (A[i] < 1) {
            j++;
            swap(A[i], A[j]);
        }
    }
    }

  */