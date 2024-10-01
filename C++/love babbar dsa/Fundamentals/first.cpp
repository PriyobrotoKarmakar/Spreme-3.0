#include<iostream>
using namespace std;
// int main(){
//     int a = 10;
//     float b = 1.00;
//     double c = 0.4748;
//     char d = 'a';
//     bool e = false;
//     cout<<sizeof(b);
// }
// int main(){
//     int age;
//     cout<<"enter your age: ";
//     cin>>age;
//     if (age>=18){
//         cout<<"you are elligible for vote";
//     }
//     else{
//         cout<<"you are not elligible for vote";
//     }
// }
// int main(){
//     // int num;
//     // cout<<"enter your number";
//     // cin>>num;
//     for (int i =1;i<=100;i++){
//     if (i%2==0){
//         cout<<i<<endl;
//     }
// }}
// int main(){
//     // int n;
//     // cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<<i<<'*'<<19<<"="<<i*19<<endl;
//     }
// }
int main(){
    cout<<"enter the number"<<endl;
    int m;
    cin>>m;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=m;j++){
            if(i>1 && i<m){
                if(j==1 || j==m){
                   cout<<"*"<<" "; 
                }
                else{
                    cout<<"  ";
                }
            }
            else{
            cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}