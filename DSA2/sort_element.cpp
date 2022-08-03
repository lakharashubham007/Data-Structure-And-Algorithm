#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a , int b) {
    return abs(a) < abs(b);
}

int main() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    sort(v.begin(),v.end(), cmp);

    for(int x:v){
        cout<<x<<" ";
    }
}