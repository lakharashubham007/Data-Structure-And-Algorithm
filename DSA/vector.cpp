#include<iostream>
#include<vector>
using namespace std;


int main() {
   
    vector<int> arr;

    //push element
    for(int i = 0; i<5; i++)
    arr.push_back(i);

    for(auto i=arr.begin(); i != arr.end(); ++i)
       cout<<*i<<" ";


    return 0;
}