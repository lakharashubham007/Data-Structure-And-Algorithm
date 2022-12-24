#include<iostream>
using namespace std;


class Codehelp {

 //Access Modifier 
 private: 

 int subs;
 int views;


 public:
//getters and setters
 void getSubs() {
    return subs;
 }

 int setSubs(int value) {
    subs = value;
 }

void print(){
    cout<< subs << endl;
}

};


int main() {
   cout<<"Size of class: "<<sizeof(Codehelp)<<endl;//Size of class: 8 padding and greedy alignment
   
   //Object Creation
    
   Codehelp firstObj;

   //cout<<firstObj.subs<<endl;


   //Dynamic Allocation object

   Codehelp* ch = new Codehelp();

   //access the value

   cout<<"get subs dynamically: "<<ch -> getSubs()<<endl;

}