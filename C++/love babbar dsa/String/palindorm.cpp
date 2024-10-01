#include<iostream>
#include<cstring>
using namespace std;
int palindrome(char ch[]){
    int i= 0;
    int j = strlen(ch)-1;
    while(i<=j){
        if(ch[i]!=ch[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;

}
int main(){
    char ch[100];
    cout<<"Enter you string without spaces: "<<endl;
    cin.getline(ch,100);
    int ans = palindrome(ch);
    if(ans==1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}