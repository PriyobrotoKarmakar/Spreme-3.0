#include<iostream>
using namespace std;
bool palindrome(string s, int i, int j){
    while(i<j){if(s[i]!=s[j]){
        return false;
    }
    else{
        i++;
        j--;
    }
    return true;
    }
}
bool checkpalindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            //iska matlab palindrome nehi he
            bool ans1 = palindrome(s,i+1,j);
            bool ans2 = palindrome(s,i,j-1);
        }
    }
}
int main(){
    string str;
    checkpalindrome(str);
}
