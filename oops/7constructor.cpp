#include <iostream>
using namespace std;

class Codehelp
{

public:
    int subs;
    bool views;

public:


   //default constructor
   Codehelp() {
    subs = 0;//initilize data member
    views = 0;//initilize data member
    cout<<"Creating an object I'm a constructor "<<endl;
   }
  
   //parametrised constructor
   Codehelp(int subCount , int viewCount){
    subs = subCount;
    views = viewCount;
    cout<<"I'm in perameterised constructor "<<endl;
   }

   //Multi  parametrised constructor
   Codehelp(int subCount , int viewCount , int n){
    subs = n * subCount;
    views = n * viewCount;
    cout<<"I'm in multi perameterised constructor "<<endl;
   }


    
};

int main()
{
  Codehelp a;//static object sucessfully calls constructor.
  Codehelp* b = new Codehelp();//dynamic object also sucessfully calls constructor.

  Codehelp* c = new Codehelp(2 , 3);//perameterised constructor calls.
  
  Codehelp* d = new Codehelp(2 , 3, 5);//perameterised constructor calls.
 


}