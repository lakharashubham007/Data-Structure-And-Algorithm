#include<iostream>
using namespace std;

bool isPal(string &str){
    int begin =0;
    int end = str.length()-1;

    while(begin < end) {
        if(str[begin] != str[end])
        return false;
        begin++;
        end--;
    }
    return true;
}

int main() {

    string str = "bob";
    
    isPal(str);

   if(isPal(str) == true){
    cout<<"String is palindrome!"<<" ";
    }else{
        cout<<"String is not palindrome!"<<endl;
    }

    return 0;
}

//start