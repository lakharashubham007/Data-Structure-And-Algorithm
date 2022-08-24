#include<iostream>
using namespace std;

long long power(long long a , long long b) {
    //base case
    if( b==0 )
    return 1;
    if(b ==1 )
    return a;

    //RECURSIVE CAll
    long long ans = power(a, b/2);

    if(b%2 == 0){
        return ans * ans;
    }else {
        return a * ans * ans;
    }
}

int main() {
    int a , b;
    cin>>a>>b;

    long long ans = power(a,b);
    cout<<"Anser is: "<< ans <<endl;

    return 0;  
}