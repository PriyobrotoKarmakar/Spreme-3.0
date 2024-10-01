#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool check(vector<int>v,int i){
    if(i+1>=v.size()){
        return true;
    }
    if(v[i]>v[i+1]){
        return false;
    }
    return check(v,i+1);
}
int main(){
    vector<int> arr = {1,2,3,4,5,7,8,9};
    cout<<check(arr,0);
    return 0;
}