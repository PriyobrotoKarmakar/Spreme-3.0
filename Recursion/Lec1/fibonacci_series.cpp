#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int ans = fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    int n=9;
    cout<<fib(n);
    return 0;
}