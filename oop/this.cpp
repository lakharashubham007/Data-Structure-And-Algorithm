#include<iostream>
using namespace std;


class Codehelp {

 //Access Modifier 
 public: 

 int subs;
 int views;

//default constructor
Codehelp(){
    subs = 0;
    views = 0; 
    cout<<"I'm a constructor"<<endl;
}
 
//this  keyword uses
Codehelp(int subs, int views){
    this->subs = subs;
    this->views = views;
   cout<<"I'm a parametrised constructor"<<endl;
}

//Multi para constructor
Codehelp(int subCount, int viewCount, int n){
    subs = n * subCount;
    views = n * viewCount;
    
   cout<<"I'm a Multivalued parametrised constructor"<<endl;
}

//Copy constructor
Codehelp(Codehelp& temp) {
    this->subs = temp.subs;
    this->views = temp.views;
    cout<<"I'm in copy constructor"<<endl;
}

int getSubs(){
    return subs;
}
void setSubs(int value){
    subs = value;
}
void print() {
    cout<<subs<<endl;
}
};


int main() {
//static object creation
Codehelp obj;

obj.setSubs(20000000);
//callcopy construcor
Codehelp obj2(obj);
//Dynamoc object creation
//Codehelp* boj1 = new Codehelp(4,1);
//Multi value parametrised constructor
//Codehelp* boj2 = new Codehelp(4,1,5);




}