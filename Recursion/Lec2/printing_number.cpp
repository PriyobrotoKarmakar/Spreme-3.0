#include<iostream>
using namespace std;
void printing_number(int num){
    if(num==0){
        return ;
    }
    printing_number(num/10);
    cout<<num%10<<" ";
}
int main(){
    int num = 1239834789;
    printing_number(num);
    return 0;
}