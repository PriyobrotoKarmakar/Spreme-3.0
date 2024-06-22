#include<iostream>
#include<vector>
using namespace std;
int search2(vector<int>& v,int target){
    int start = 0;
    int end = v.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(v[mid]==target){
            return v[mid];
        }
        else if(v[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
} 
int main(){
    vector<int> v{10,20,30,40,50,60};
    int target = 40;
    int ans = search2(v,target);
    if(ans == -1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    


    return 0;
}