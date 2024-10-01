#include<iostream>
using namespace std;
int main(){
    //char ch[100];
    //if we have to input only one single word which will not have spaces, tab, enter then we can use cin
    // cin>>ch;
    //but for input whole sentence we need getline() function.
    // cin.getline(ch, 100);
    // cout<<ch<<endl;
    // cout<<"Output with separator charectors"<<endl;
    // for(int i=0;i<100;i++){
    //     cout<<ch[i]<<endl;
    // }

//dynamic stirng
    //string ch;
    //it can only take the input without spaces
    // cin>>ch;
    // cout<<ch<<endl;
    //it can take input with spaces
    // string ch2;

//getline function
    // getline(cin,ch2);
    // cout<<ch2<<endl;

//length function
    // cout<<"Length of the string: "<<ch2.length()<<endl; 

//empty function
    // cout<<"String is empty or not: "<<ch2.empty()<<endl;
    // string name;
    // getline(cin,name);
    // for(int i=0;i<name.length();i++){
    //     //at function
    //     cout<<"Printing the element at "<<i<<"th position: "<<name.at(i)<<endl;
    // }

//front and back function
    // cout<<"Front Element: "<<name.front()<<endl;
    // cout<<"Back Element: "<<name.back()<<endl;

//append function
    // string str1,str2;
    // getline(cin,str1);
    // getline(cin,str2);
    // str2.append(str1);
    // cout<<str2;

//erase function
//erase(from which index you want to remove, how many elements you want to remove from that index)

    string str;
    getline(cin,str);
    cout<<"before erase"<<str<<endl;
    str.erase(4,3);
    cout<<"after erase"<<endl;
    cout<<str;
    return 0;   
}