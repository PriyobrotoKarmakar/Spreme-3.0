#include<iostream>

#include<vector>
using namespace std;
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}
vector<int> increasing_short(vector<int>& v){
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<=(n-i-1);j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    return v;
}
vector<int> deccreasing_short(vector<int>& v){
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            if(v[j]>v[j+1]);
            swap(v[j],v[j+1]);
        }
    }
    
    return v;
}
int main(){
    vector<int> v;
    vector<int> v2;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(0);
    v2=v;
    vector<int> acending_v; 
    acending_v = increasing_short(v);
    cout<<"acending order:"<<endl;
    print(acending_v);
    vector<int> decending_v; 
    decending_v = deccreasing_short(v2);
    cout<<"decending order:"<<endl;
    print(decending_v);
    }