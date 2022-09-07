#include<iostream>
using namespace std;


class Codehelp {


private:
int subs;
bool a;


void main() {
    cout<<"print private things: "<< subs <<endl;
}
};

int main() {
  cout<<"Size of empty class is "<< sizeof(Codehelp)<<endl;

//Object Creation
Codehelp first;
cout<<"printing the subs for first object "<< first.subs <<endl; 

}