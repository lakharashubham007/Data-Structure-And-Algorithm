#include<iostream>
using namespace std;

class Human{
    public:
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

}


int main(){

    return 0;
}