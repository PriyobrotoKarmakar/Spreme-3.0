#include<iostream>
#include<queue>
using namespace std;
int main(){
deque<int>m{1,2,3,4,5,6};
deque<int>n{1,2,3,4,5,6};
deque<int>ans;

int i=n.size()-1;
int carry = 0;
for(;i>=0;i--){
    if(carry+m[i]+n[i]>=10){
        ans.push_front((carry+m[i]+n[i])%10);
        carry=1;
    }
    else{
        ans.push_front(carry+m[i]+n[i]);
        carry=0;
    }
}
if(carry==1){
    ans.push_front(1);
}
    for(int it: ans){
        cout<<it<<" ";
    }
    
    return 0;
}