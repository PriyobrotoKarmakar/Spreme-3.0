#include<iostream>
using namespace std;
void prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            cout<<a<<"is not PRIME number.";
            return;
        }
    }
    cout<<a<<"is PRIME number.";
}
int main(){
    int a;
    
    prime(a);
}