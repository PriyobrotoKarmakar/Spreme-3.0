#include<iostream>
using namespace std;
int maxi(int a, int b){
    if(a>b){
        return a;
    }
    else if(a=b){
        return b;
    }
    else{
        return b;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d = maxi(a,b); // we can also use inbuild function "max(a,b)"
    int e = maxi(d,c); // "max(d,c)"
    cout<<"MAX: "<<e;
}   