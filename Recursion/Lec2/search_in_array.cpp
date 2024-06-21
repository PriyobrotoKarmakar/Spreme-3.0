#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int> v,int target,int index){
    if(index>=v.size()){
        return false;
    }
    if(v[index]==target){
        return true;
    }
    return search(v,target,index+1);

}
int main(){
    vector<int> v{10,20,30,40,50,60,70};
    cout<<search(v,100,0);

    return 0;
}