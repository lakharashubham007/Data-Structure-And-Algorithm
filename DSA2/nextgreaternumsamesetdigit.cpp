#include <bits/stdc++.h>
using namespace std;

int nextGreaterElementWithSameSetOfDigits(int n){
string s = to_string(n);
        if(!next_permutation(s.begin(), s.end())) return -1;
        long n1= stol(s);
        if(n1>INT_MAX) return -1;
        else{
            return n1;
        }
}


int main(){
    int n;
    cin>>n;
    cout<<nextGreaterElementWithSameSetOfDigits(n);
    return 0;
}