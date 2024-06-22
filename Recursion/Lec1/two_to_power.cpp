#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

 int power_2(int n){
    if(n==0){
        return 1;
    }
    return 2*power_2(n-1);
 }
int main(){
    int n = 5;
    int ans = power_2(n);
    cout<<ans<<endl;
    return 0;
}