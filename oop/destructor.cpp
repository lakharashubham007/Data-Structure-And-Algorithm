#include <iostream>
using namespace std;

class Codehelp
{

public:
    int subs;
    bool views;

public:
    // default constructor
    Codehelp()
    {
        subs = 0;  // initilize data member
        views = 0; // initilize data member
        cout << "Creating an object I'm a constructor " << endl;
    }

    // parametrised constructor
    Codehelp(int subs, int views)
    {
        this->subs = subs; // ye apni hi value khud me copy karega.
                           // Now introduce this keyword
        this->views = views;
        cout << "I'm in perameterised constructor " << endl;
    }

    // copy constructor

    Codehelp(Codehelp &temp)
    {
        this->subs = temp.subs;
        this->views = temp.views;
        cout << "im in copy constructor " << endl;
    }

    // getters
    int getSubs()
    {
        return subs;
    }

    // setters
    void setSubs(int value)
    {
        subs = value;
    }

    //  Multi  parametrised constructor
       Codehelp(int subCount , int viewCount , int n){
        subs = n * subCount;
        views = n * viewCount;
        cout<<"I'm in multi perameterised constructor "<<endl;
       }

       //destructor
       ~Codehelp() {
        cout<<"Destructor called "<<endl;
       }
     
};

int main()
{
    Codehelp a; // static object sucessfully calls constructor.
    a.setSubs(20000000);

    // call copy constructor
    Codehelp b(a);

    // Codehelp* b = new Codehelp();//dynamic object also sucessfully calls constructor.

    Codehelp* d = new Codehelp(2 , 3);//perameterised constructor calls.

    Codehelp* e = new Codehelp(2 , 3, 5);//perameterised constructor calls.
    
    delete d;
    delete e;
   
}