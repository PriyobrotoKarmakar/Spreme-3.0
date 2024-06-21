#include<iostream>
#include<limits.h>
using namespace std;
int max_element(int arr[],int n){
    int maxans = INT_MIN;
    for(int i=0;i<n;i++){
        maxans = max(maxans,arr[i]);
    }
    return maxans;
}
int min_element(int arr[],int n){
    int minans = INT_MAX;
    for(int i=0;i<n;i++){
        minans = min(minans,arr[i]);
    }
    return minans;
}
int main(){
    int arr[100];
    int size = 5;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"MAX ELEMENT: "<<max_element(arr,size)<<endl;
    cout<<"MIN ELEMENT: "<<min_element(arr,size)<<endl;
    
    return 0;
}