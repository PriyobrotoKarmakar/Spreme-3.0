#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
    int s = v.size();
    // for (int i=0;i<s;i++){
    //     cout << v[i]<<endl;
    // }
    for(auto it:v){
        cout<<it;
    }

}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);


}