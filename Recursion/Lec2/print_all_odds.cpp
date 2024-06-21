#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void print_odd(vector<int> v,int index){
    if(index>=v.size()){
        return;
    }
    if(v[index]&1==1){
        cout<<v[index]<<" ";
    }
    print_odd(v,index+1);
}
int main(){
    vector<int>v{1,2,3,4,500,6,7,8,9,11};
    int index = 0;
    print_odd(v,index);



    return 0;
}