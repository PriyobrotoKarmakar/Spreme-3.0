#include<iostream>
#include<string>
using namespace std;
string FindingPart(string& str,string part){
    while(str.find(part) != string::npos){
        str.erase(str.find(part),part.length());
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    string part;
    cin>>part;
    str = FindingPart(str,part);
    cout<<str;
    return 0;
}