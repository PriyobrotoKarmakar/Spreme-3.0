#include<iostream>
using namespace std;
int main(){
    //using swap() method;
    int a = 5, b = 6;
    swap(a,b);
    cout<<"a = "<<a;
    cout<<" b = "<<b;
    cout<<endl;
    //using temp veriable
    int c = 7 , d = 9;
    int temp;
    temp = d;
    d = c;
    c = temp;
    cout<<"c = "<<c;
    cout<<" d = "<<d;
    cout<<endl;

    //using arithmetic  method
    int e = 4 ,f = 8;
    e = e+f;
    f= e-f;
    e = e-f;
    cout<<"e = "<<e;
    cout<<" f = "<<f;
    cout<<endl;
    //using xor method
    int g = 19,h=11;
    g = g^h;
    h =g^h;
    g = g^h;
    cout<<"g = "<<g;
    cout<<" h = "<<h;
    cout<<endl;
  
    return 0;
}