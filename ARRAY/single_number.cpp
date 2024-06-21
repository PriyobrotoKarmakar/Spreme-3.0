#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int> v{2,3,3,4,4,2,1,5,5};
    //using map
    map<int,int> m;
    for(int i:v){
        if(m.count(i)==0){
            m[i]=1;
        }else{
            m[i]=2;
        }
    }
    auto it = m.begin();
    while(it!=m.end()){
        if(it->second==1){
            cout<<it->first<<endl;
            break;
        }
        it++;
    }

    // using xor
    cout<<endl;
    int ans = 0;
    for(auto i:v){
        ans^=i;
    }
    cout<<ans<<endl;


    //usnig indexing
    cout<<endl;
    int i=0;
    int ans;
    while(i<v.size()){
        if(v[i]==v[i+1] && i+1<v.size()){
            i+=2;
        }
        else{
            ans = v[i];
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}