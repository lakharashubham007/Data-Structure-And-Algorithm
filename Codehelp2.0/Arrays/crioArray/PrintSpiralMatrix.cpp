#include <bits/stdc++.h>
using namespace std;




int main() {
    int n;
    cin>>n;

    vector<vector<int> > result = spiralMatrix(n);
    for(auto &row: result){
        for(auto &element: row){
            cout<<element<<" ";
        }
        cout<<" \n ";
    }
}