#include<iostream>
using namespace std;

int countSubStr(char str[]){
  int m = 0;

  for(int i=0; str[i] !='\0'; i++){
    if(str[i] == '1')
    m++;
  }
  return m*(m-1)/2;

}


int main() {

    char str[] = "1111";
    cout<<countSubStr(str);
    return 0;
}

//Amazon, Flipkart 
// Time Complexity: O(n), where n is the length of the string.
// Auxiliary Space: O(1).