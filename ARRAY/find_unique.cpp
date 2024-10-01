#include<iostream>
using namespace std;

bool check(int arr[],int n,int i){
    
    for(int z=0; z<n; z++){
        if(z!=i){
        if(arr[i]==arr[z]){
            return 1;
        }

     }
    }
    return 0;
}

void unique(int arr[],int n){
    int i=0;
    while(i<n){
        cout<<"ok"<<endl;
        if(check(arr,5,i)==1){
            cout<<arr[i]<<endl;
            i++;
        }
        else{
            cout<<"the unique elment is: "<<arr[i];
            break;
        }
    }
}

int main(){
    int arr[5]={2,4,7,2,7};

    unique(arr,5);
    return 0;
}