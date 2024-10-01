#include<iostream>
using namespace std;
int count(int arr[],int s,int el){
    int c=0;
    for(int i=0;i<s;i++){
        if(arr[i]==el){
            c++;
        }
    }
    return c;
}
int main(){
    int arr[]={0,1,1,0,1,0,0,1,1};
    int zeroCount = count(arr,9,0);
    int oneCount = count(arr,9,1);
    int i=0;
    while(zeroCount--){
        arr[i]=0;
        i++;
    }
    while(oneCount--){
        arr[i]=1;
        i++;
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}