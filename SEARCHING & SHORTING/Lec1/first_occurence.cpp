#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int find_first_occ(vector<int> v,int target){
    int start = 0;
    int end = v.size()-1;
    int ans_index;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(v[mid]==target){
            ans_index = mid;
            end = mid-1;
        }
        else if (v[mid]>target)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans_index;
}
int main(){
    vector<int> v{10,20,20,20,20,20,20,30,40};
    int target = 40;
    cout<<find_first_occ(v,target)<<endl;
    return 0;
}