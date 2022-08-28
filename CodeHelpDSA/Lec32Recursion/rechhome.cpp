#include<iostream>
using namespace std;

void reachHome(int src, int dest) {
    cout<< "sorce " << src << " -to -> " << " destination "<< dest << endl;
    //base case
    if(src == dest) {
        cout<<"Reach at my home! Thankyou.."<<endl;
        return ;
    }
    //process
    src++;
    //recursive call
    reachHome(src, dest);
}


int main() {
     
     int dest = 10;
     int src = 1;

     //cout<< endl;

     reachHome(src, dest);

     return 0;
}