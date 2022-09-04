#include<iostream>
using namespace std;


class Codehelp {

int subs;//Size of empty class is 4
bool a; //Size of empty class is 8 why?? == bcz of padding and greedy alignment.

};

int main() {
  cout<<"Size of empty class is "<< sizeof(Codehelp)<<endl;
}