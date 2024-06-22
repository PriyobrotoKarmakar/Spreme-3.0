#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void print_nto1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print_nto1(n-1);
}
void print_1ton(int n){
    if(n==0){
        return;
    }
    print_1ton(n-1);
    cout<<n<<endl;
}
int main(){
    int n =5;
    print_nto1(n);
    cout<<" 1 to n"<<endl;
    print_1ton(n);
    return 0;
}