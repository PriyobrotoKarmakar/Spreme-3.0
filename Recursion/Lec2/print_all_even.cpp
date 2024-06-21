#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void print_even(vector<int> v,int index){
    // cout<<"inside funtion"<<endl;
    if(index>=v.size()){
        return;
    }
    if((v[index]&1)==0){
        cout<<v[index]<<" ";
    }
    print_even(v,index+1);
}
int main(){
    vector<int>v{1,2,30,40,500,6,7,8,9,11};
    int index = 0;
    print_even(v,index);
    return 0;
}