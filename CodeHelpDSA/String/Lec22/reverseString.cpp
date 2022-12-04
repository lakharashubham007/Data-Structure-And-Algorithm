#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e) {
        swap(name[s++],name[e--]);
    }
}


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
    int len = getLength(name);
    cout<<"Length of string is: "<< len <<endl;
    reverse(name,len);
    cout<<"Reversed Name is: "<< name<<endl;

    return 0;

}