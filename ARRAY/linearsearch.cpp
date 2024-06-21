#include<iostream>
using namespace std;
bool search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]== target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[100];
    int size = 5;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    bool c = search(arr,size,target);
    if(c){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }

    return 0 ;
}