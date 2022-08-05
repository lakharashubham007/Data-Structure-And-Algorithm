#include <bits/stdc++.h>
using namespace std;


bool compareNumbers(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
       return true;
    if (n2 < n1)
       return false;
 
    // If lengths are same
    for (int i=0; i<n1; i++)
    {
       if (str1[i] < str2[i])
          return true;
       if (str1[i] > str2[i])
          return false;
    }
 
    return false;
}

vector<string> numSort(int n , vector<string >& numbers){
    sort(numbers.begin(), numbers.end(), compareNumbers);
    return numbers;
}


int main(){
    int n;
    cin>>n;
    vector<string > numbers(n);
    for(auto &str:numbers){
        cin>> str;
    }
    vector<string> result = numSort(n, numbers);
    for(auto &str: result){
        cout<< str<<" ";
    }
}