#include<iostream>
#include<vector>
#include<string>
using namespace std;
void map(string& str){
    char start = 'a';
    char mapping[156]={0};
    //creating mapping
    for(auto ch: str){
        mapping[ch]=start;
        start++;
    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        str[i]=mapping[ch];
    }
}
    vector<string> replace(string& pattern, vector<string>& words){
        vector<string> ans;
        map(pattern);
        for(auto word: words){
            string TempWord = word;
            map(TempWord);
            if(TempWord==pattern){
                ans.push_back(word);
            }
        }
        return ans;
    }

int main(){

}