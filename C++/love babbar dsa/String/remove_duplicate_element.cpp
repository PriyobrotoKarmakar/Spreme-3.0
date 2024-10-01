#include<iostream>
#include<string>
using namespace std;
string RemoveElement(string& s){
    string ans="";
    int index = 0;
    while(index<s.length()){
        if(ans.length()>0 && ans[ans.length()-1]==s[index]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}
int main(){
    string str = "";
    cin>>str;
    str = RemoveElement(str);
    cout<<str;
    return 0;

}