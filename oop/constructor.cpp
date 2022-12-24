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
 
//parametrised constructor
Codehelp(int subCount, int viewCount){
    subs = subCount;
    views = viewCount;
   cout<<"I'm a parametrised constructor"<<endl;
}

//Multi para constructor
Codehelp(int subCount, int viewCount, int n){
    subs = n * subCount;
    views = n * viewCount;
    
   cout<<"I'm a Multivalued parametrised constructor"<<endl;
}
};


int main() {
//static object creation
Codehelp obj;
//Dynamoc object creation
Codehelp* boj1 = new Codehelp(4,1);
//Multi value parametrised constructor
Codehelp* boj2 = new Codehelp(4,1,5);




}