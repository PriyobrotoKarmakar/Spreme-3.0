#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool check_sorted(vector<int> v,int index){
    if(index+1>=v.size()){
        return true;
    }
    if(v[index]>v[index+1]){
        return false;
    }
    return check_sorted(v,index+1);

}
int main(){
    vector<int>v{10,20,30,40,50,60,70,80,90};
    cout<<check_sorted(v,0);
    return 0;
}