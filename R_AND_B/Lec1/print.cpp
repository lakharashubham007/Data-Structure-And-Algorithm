#include<iostream>
using namespace std;

void print(int n) {
   //Base case
   if(n ==0)
   return ;


   cout<< n << " ";

   print(n-1);
}


int main() {
    int n;
    cin>>n;

    print(n);
    cout<<endl;

}