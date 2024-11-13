#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr,int index,int n){
    int smallest=index;
    int left=2*index+1;
    int right=2*index+2;
    
    if(left<n && arr[left] < arr[smallest]){
        smallest=left;
    }
    if(right<n && arr[right]< arr[smallest]){
        smallest=right;
    }
    if(smallest!=index){
        swap(arr[smallest],arr[index]);
        heapify(arr,smallest,n);
    }
}

void buildminheap(vector<int> &arr, int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
}

void print(vector<int> &arr){
    for(int p: arr){
        cout<<p<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int threshold;
    cin>>threshold;
    buildminheap(arr,n);
    print(arr);
    int count=0;
    for(int age: arr){
        if(age<threshold){
            count++;
        }
    }
    cout<<count<<endl;
    
}
//yas
// You are using GCC
void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
void maxHeapify(int arr[], int n, int i) {
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        maxHeapify(arr,n,largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for(int i=n/2-1;i>=0;i--){
        maxHeapify(arr,n,i);
    }
}
void insertIntoMaxHeap(int arr[], int *n, int value) {
     arr[*n]=value;
    (*n)++;
    int index=*n-1;
    while(index>0){
        int parent=(index-1)/2;
        if(arr[index]>arr[parent]){
            swap(&arr[index],&arr[parent]);
            index=parent;
        }else{
            break;
        }
    }
}

