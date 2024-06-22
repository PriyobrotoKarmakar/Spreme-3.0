#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int facto(int n){
    if(n==0){
        return 1;
    }
    return n*facto(n-1);
}
int main(){
    int n = 5;
    int ans = facto(n);
    cout<<ans<<endl;
    return 0;
}