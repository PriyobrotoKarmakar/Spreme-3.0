#include<iostream>
using namespace std;
int fact(int num){
    int f = 1;
    for(int i=1;i<=num;i++){
        f*=i;
    }
    return f;
}
void triangle(int n){
    int k = n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            int g = fact(j)/(fact(i)*fact(i-j));
            cout<<g<<' ';
        }
        for(int j=1;j<=k;j++){
            cout<<" ";
        }
        k--;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    triangle(n);
}