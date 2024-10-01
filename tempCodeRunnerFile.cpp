#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr){
    int i=0;
    int j = arr.size()-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
}

int main(){
    int size;
    cin>>size;
    vector<int>arr(size);
    for(int& nums:arr){
        cin>>nums;
    }
    reverse(arr);
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    
    return 0;
}