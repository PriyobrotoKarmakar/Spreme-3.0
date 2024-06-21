#include<iostream>
#include<vector>
using namespace std;
void printing(vector<int> v,int index){
    if(index==v.size()){
        return;
    }
    cout<<v[index]<<" ";
    printing(v,index+1);
}
int main(){
    vector<int> v{10,20,30,40,50,60,70};
    printing(v,0);
    return 0;
}