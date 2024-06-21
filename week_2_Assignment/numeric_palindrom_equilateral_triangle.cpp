#include <iostream>
using namespace std;
int main() {
  int num;
  cin>>num;
  int sum = num-1;
  for(int i=1;i<=num;i++){

    for(int s=sum;s>=1;s--){
        cout<<" "<<" ";
    }
    sum--;
    for(int j=1;j<=i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
    
  return 0;
}