#include<iostream>
using namespace std;


const int CHAR = 256;
bool areAnagram(string &s1, string &s2){
 
   if(s1.length() != s2.length())
   return false;


   int count[CHAR] = { 0 };

   for(int i=0; i<s1.length(); i++){
       count[s1[i]]++;
       count[s2[i]]--;
   }

   for(int i=0; i<CHAR; i++){
    if(count[i] !=0 )
    return true;
   }
   return true;
}


int main() {

    string s1 = "listen";
    string s2 = "silent";

    areAnagram(s1,s2);

    if(areAnagram(s1,s2) == true ){
        cout<<"String is Anagram to each other"<<" "<<endl;
    }else{
        cout<<"String is not Anagram to each other"<<" "<<endl;
    }
    return 0;
}