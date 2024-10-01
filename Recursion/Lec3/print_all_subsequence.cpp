#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void subsequence(string str,string output,int i,vector<string>&ans){
    if(i==str.length()){
        ans.push_back(output);
        return;
    }
    char ch  = str[i];
    subsequence(str,output+ch,i+1,ans);
    subsequence(str,output,i+1,ans);
}
int main(){
    string str= "priyobroto karmakar";
    string output = "";
    int index = 0;
    vector<string> ans;
    subsequence(str,output,index,ans);
    // for(auto i:ans){
    //     cout<<++index<<". "<<i<<endl;
    // }
    cout<<"total subsequence: "<<ans.size()<<endl;
    return 0;
}
