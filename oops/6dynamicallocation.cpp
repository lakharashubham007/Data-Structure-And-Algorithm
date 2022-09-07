#include <iostream>
using namespace std;

class Codehelp
{

private:
    int subs;
    bool views;

public:
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

    void print()
    {
        cout << "print private things: " << subs << endl;
    }
};

int main()
{
    cout << "Size of empty class is " << sizeof(Codehelp) << endl;

    // Static Object Creation
    Codehelp first;
     
   //Statoc Object Access
   cout<<first.getSubs()<< endl;


     // cout<<"printing the subs for first object "<< first.subs <<endl;
   

    //---Dynamic Object Creation
    Codehelp *ch = new Codehelp();

    //----access Dynamic
    cout<< "Dynamic  object initialze with Zero : "<<ch->getSubs();
}