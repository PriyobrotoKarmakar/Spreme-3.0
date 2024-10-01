#include<bits/stdc++.h>
// #include<climits>
// #include<string>
// #include<vector>
// #include<algorithm>
using namespace std;
void merge(vector<int>&arr,int s,int e,int mid){
    //left part
    int leftLength = mid-s+1;
    vector<int> leftArr(leftLength);
    //right part
    int rightLength = e-mid;
    vector<int> rightArr(rightLength);

    //copying the left part
    int index = s;
    for(int i=0;i<leftLength;i++){
        leftArr[i]=arr[index++];
    }

    

    

    index = mid+1;
    //copying the right part
    for(int i=0;i<rightLength;i++){
        rightArr[i]=arr[index++];
    }


    //merge by comparing the elements
    int i = 0;
    int j = 0;
    int mainIndex = s;


    while(i<leftLength && j<rightLength){
        if(leftArr[i]<rightArr[j]){
            arr[mainIndex]=leftArr[i];
            i++;
            mainIndex++;
        }
        else{
            arr[mainIndex]=rightArr[j];
            j++;
            mainIndex++;
        }
    }

    //insert the remaining elements


    //left part
    while(i<leftLength){
        arr[mainIndex]=leftArr[i];
        i++;
        mainIndex++;
    }
    //right part
    while(j<rightLength){
        arr[mainIndex]=rightArr[j];
        j++;
        mainIndex++;
    }
}
void merge_sort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    //left part
    merge_sort(arr,s,mid);
    //right part
    merge_sort(arr,mid+1,e);
    //merger
    merge(arr,s,e,mid);
}
int main(){
    vector<int> arr{1,4,3,5,5,6,70,8,-9,10};
    int s = 0;
    int e = arr.size()-1;
    cout<<"before sorting"<<endl;
    for(auto i: arr){
        cout<<i<<" ";
    }
    merge_sort(arr,s,e);
     cout<<endl<<"after sorting"<<endl;
     for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}