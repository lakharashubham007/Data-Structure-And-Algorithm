#include<iostream>
using namespace std;

int cStair(long long nStairs){


    //base case
    if(nStairs < 0)
     return 0;

     if(nStairs == 0)
     return 1;

     //R.C
     int ans = cStair(nStairs-1)+cStair(nStairs-2);
     return ans;
}

int main(){

    int n;
    cin>>n;

  int ans = cStair(n);
  cout<< ans << " ";
    
  return 0;
}

