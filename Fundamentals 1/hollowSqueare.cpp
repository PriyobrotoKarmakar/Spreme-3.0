#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 or j==0 or i==n-1 or j==n-1){
                cout<<"*";
            }



            


            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}