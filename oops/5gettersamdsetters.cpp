#include<iostream>
using namespace std;


class Codehelp {


private:
int subs;
bool views;


public: 
//getters
int getSubs(){
    return subs;
}

//setters
int setSubs(int value) {
    subs = value;
}


void print() {
    cout<<"print private things: "<< subs <<endl;
}
};

int main() {
  cout<<"Size of empty class is "<< sizeof(Codehelp)<<endl;

//Object Creation
Codehelp first;

//cout<<"printing the subs for first object "<< first.subs <<endl; 

Codehelp* ch = new Codehelp();



}