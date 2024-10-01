#include<iostream>
using namespace std;
int sqrt(int n){
    int start = 0;
    int end = n;
    long long int mid = start+(end-start)/2;
    int ans;
    while(start<=end){
        
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid<n){
            ans =mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter you number: ";
    cin>>n;
    int ans = sqrt(n);
    cout<<ans;
}