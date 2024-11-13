#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cmath>
#include<map>
#include<sstream>
#include<queue>
#include<stack>
using namespace std;
int operation(char op,int a,int b){
    switch (op){
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/': return b==0 ? 0 : a/b;
    }
    return 0;
}
int solve(string eq){
    stack<int>s;
    for(int i=0;i<eq.length();i++){
        if(isdigit(eq[i])){
            s.push(eq[i]-'0');
        }
        else{
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            int ans = operation(eq[i],a,b);
            s.push(ans);
        }
    }
    return s.top();

}
int main(){
    string eq = "781*3/+6-5-";//post fix eq
    cout<<solve(eq);
    
    return 0;
}