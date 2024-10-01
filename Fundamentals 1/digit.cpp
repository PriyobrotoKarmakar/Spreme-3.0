#include<iostream>
#include<math.h>
using namespace std;
int power(int n){
    int ans=1;
    while(n>0){
        ans*=10;
        n--;
    }
    return ans;
}
int main(){
    int arr[3]={1,2};
    cout<<arr[0];
    // int n=231;
    // int ans = 0,i=0;
    // while(n>0){
    //     int digit = n%10;
    //     cout<<ans<<" "<<digit<<endl;
    //     int check = digit*pow(10,i);
    //     cout<<check<<endl;
    //     ans+= check;
    //     cout<<pow(10,i)<<" "<<ans<<endl;;
    //     n/=10;
    //     i++;
    // }
    double n = 90;
    // printf("%.6af",n);
    return 0;
}