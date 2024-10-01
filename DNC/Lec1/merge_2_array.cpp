#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void mergeshort(vector<int>& v1, vector<int>& v2,vector<int>&ans){
    int i = 0;
    int j = 0;    
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            ans.push_back(v1[i]);
            i++;
        }


        else{
            ans.push_back(v2[j]);
            j++; //this will be the case when we have to add the elememt from v2
        }
    }
    //v2 me bach geya element
    if(j==v2.size()&&i!=v1.size()){
        while(i<v1.size()){
            ans.push_back(v1[i]);
            i++;
        }
    }
    //h
    //v1 me bah geya element
    else if(j!=v2.size() && i==v1.size()){
        
        while(j<v2.size()){
            ans.push_back(v2[j]);
            j++;
        }
    }
}

int main(){
    vector<int> v1{1,2,3,4,5,6,7,8,9,10};
    vector<int> v2{10,50,60,70};
    vector<int> ans;
    mergeshort(v1,v2,ans);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}