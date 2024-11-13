#include<iostream>
#include<string>
using namespace std;
template<typename T>
T add(T a, T b){
    return a+b;
}

int main(){
    cout<<add("5.7","7.8")<<endl;
    return 0;
}