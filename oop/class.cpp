#include<iostream>
using namespace std;


class Codehelp {

 //Access Modifier 
 public: 

 int subs;
 bool a;


private:
void print(){
    cout<< subs << endl;
}

};


int main() {
   cout<<"Size of class: "<<sizeof(Codehelp)<<endl;//Size of class: 8 padding and greedy alignment
   
   //Object Creation
    
    Codehelp firstObj;

    cout<<"Printing subs for firstOBJ "<<firstObj.subs<<endl;


}