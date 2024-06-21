#include<iostream>
#include<vector>
using namespace std;
void printing_reverse(vector<int>v,int index){
    if(index>=v.size()){
        return;
    }
    printing_reverse(v,index+1);
    cout<<v[index]<<" ";

}
int main(){
    vector<int>v{1,2,3,4,500,6,7,8,9,-10};
    int index = 0;
    printing_reverse(v,index);


    return 0;
}

