#include<iostream>
#include<limits.h>
using namespace std;
int mini(int arr[],int size){
    int minimum = INT_MAX;
    for(int i = 0; i<size;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}
int maxi(int arr[],int size){
    int maximum = INT_MIN;
    for(int i = 0; i<size;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    return maximum;
}
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int minimum = mini(arr,n);
    int maximum = maxi(arr,n);
    cout<<"min: "<<minimum<<" max: "<<maximum<<endl;
}