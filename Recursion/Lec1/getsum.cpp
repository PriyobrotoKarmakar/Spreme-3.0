#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int get_sum(int n){
    if(n==1){
        return 1;
    }
    int ans = n + get_sum(n-1);
    return ans;
  
}
int main(){
    int n=10;
    int sum=0;
    cout<<get_sum(n)<<endl;
    return 0;
}