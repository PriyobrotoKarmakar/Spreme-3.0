#include<iostream>
#include<string>
using namespace std;

string Coding(string& key, string& message){
    //create mapping
    char start = 'a';
    char mapping[300]={0};
    for(auto ch: key){
        if(ch!=' ' && mapping[ch] == 0){
            mapping[ch]= start;
            start++;
        }
    }
    //use mapping
    string ans;
    for(auto ch: message){
        if(ch==' '){
            ans.push_back(' ');
        }
        else{
            ans.push_back(mapping[ch]);
        }
    }
    return ans;


}
int main(){
    string key;
    cin>>key;
    string message;
    cin>>message;
    cout<<Coding(key, message)<<endl;
    return 0;
}