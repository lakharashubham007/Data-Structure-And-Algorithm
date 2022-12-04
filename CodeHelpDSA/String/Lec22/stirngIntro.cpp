#include<iostream>
using namespace std;

int main() { 

    char name[20];
    cout<<"Enter Your name dear? "<<endl;
    cin>>name;
    name[2] = '\0';
    cout<<"Your name is: "<<name<<"!"<<endl;
    return 0;

}