#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    cout<<v.max_size();
    // v.push_back(1);
    // print(v);
    // v.pop_back();
    // print(v);
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    return 0;
}