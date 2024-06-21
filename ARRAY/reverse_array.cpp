#include<iostream>
#include <algorithm>  
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse_array(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<end)
        swap(arr[start++],arr[end--]);
}
int main(){
    //using function
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    cout<<"Before reversing:"<<endl;
    print_array(arr,size);
    cout<<endl;
    reverse_array(arr,size);
    cout<<"After reversing:"<<endl;
    print_array(arr,size);

    //using inbuild reverse function
    int brr[5]={1,2,3,4,5};
    size = 5;
    cout<<"Before reversing:"<<endl;
    print_array(brr,size);
    reverse(brr,brr+size);
    cout<<"after reversing:"<<endl;
    print_array(brr,size);
    return 0;
}