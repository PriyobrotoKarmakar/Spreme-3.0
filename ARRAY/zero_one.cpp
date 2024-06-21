#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int> v{0,1,0,0,1,0,1,0,0,0,0,0,1,1,1,1,1,1,0,1,0};
    int i=0;
    int j = v.size()-1;

    while(i<j){
        if(v[j]==0){
            if(v[i]==1){
                swap(v[i],v[j]);
            }
            else{
                i++;
            }
        }
        else{
            j--;
        }
    }
    for(auto it :v){
        cout<<it<<" ";
    }

    return 0;
}