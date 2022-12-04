#include<iostream>
using namespace std;


int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++; 
    } 
    return count;
}

int main() { 

    char name[20];
    cout<<"Enter Your name dear? "<<endl;
    cin>>name;
    //name[2] = '\0';
    cout<<"Your name is: "<<name<<"!"<<endl;
   cout<<"Length of string is: "<<getLength(name)<<endl;
    return 0;

}