#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int search_max(vector<int> v,int &maxi,int index){
    if(index >=v.size()){
        return maxi;
    }
    maxi = max(maxi,v[index]);
    search_max(v,maxi,index+1);
    return maxi;
}
int main(){
    vector<int>v{1,2,3,4,500,6,7,8,9,10};
    int index = 0;
    int maxi = INT_MIN;


    int ans = search_max(v,maxi,index);
    cout<<maxi<<endl;
    return 0;
}
