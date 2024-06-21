#include<iostream>
#include<vector>
using namespace std;
// bool binary_s(vector<int>v,int start,int end,int target){
//     if(start>end){
//         return false;
//     }
//     int mid = (start+end)/2;
//     if(v[mid]==target){
//         return true;
//     }
//     else if(v[mid]>target){
//         return binary_s(v,start,mid-1,target);
//     }
//     else{
//         return binary_s(v,mid+1,end,target);
//     }
//     return false;
// }
int binary_s(vector<int>v,int start,int end,int target){
    if(start>end){
        return -1;
    }
    int mid = start+(end-start)/2;
    if(v[mid]==target){
        return mid;
    }
    else if(v[mid]>target){
        return binary_s(v,start,mid-1,target);
    }
    else{
        return binary_s(v,mid+1,end,target);
    }
    return -1;
}
int main(){
    vector<int> v{10,20,30,40,50,60,70};
    int target=-10;
    int start = 0;
    int end = v.size()-1;
    cout<<binary_s(v,start,end,target);
    return 0;
}