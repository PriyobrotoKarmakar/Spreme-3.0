#include<iostream>
using namespace std;
int getlength(char ch[], int size){
    int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char ch[100];
    cin>>ch;
    int len = getlength(ch, 100);
    cout<<len<<endl;

    return 0;
}