#include <iostream>
using namespace std;
int main() {
  int num;
  cin>>num;
  for(int i=num;i>=1;i--){
    for(int j=1;j<=i;j++){
      if(i==1 || j==1 || j==i || i==num){
        
      cout<<j<<" ";
      }
      else{
        cout<<" "<<" ";
      }
    }
    cout<<endl;
  }
  cout << "Hello World!\n";
}