#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void search_min(vector<int>v, int &mini,int index){
    if(index>=v.size()){
        return;
    }
    mini = min(mini,v[index]);
    search_min(v,mini,index+1);
}
int main(){
    vector<int>v{1,2,3,4,500,6,7,8,9,-10};
    int index = 0;
    int mini = INT_MAX;


    search_min(v,mini,index);
    cout<<mini<<endl;

    return 0;
    }

