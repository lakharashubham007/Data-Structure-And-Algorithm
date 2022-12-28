#include<iostream>
using namespace std;

class Human{
    public://This is the way we build fully encpsulated class
    int height;
    int weight;
    int age;

    public:
    Human() {

    }
    int getAge() {
        return this->age;
    }
        int getHeight() {
        return this->height;
    }

    int getWeight() {
        return this->weight;
    }

};

class Male: public Human {

}


int main(){

    Male obj;
    obj.getAge;
    
    cout<<"Fully Encapsulation is Done"<<endl;
    return 0;
}