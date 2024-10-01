#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class stack{
    public:
        int *arr;
        int size;
        int top;
        int index = 0;
    stack(int size){
        this->size = size;
        arr = new int[size];
        this->top = -1;
    }
    void push(int val){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]= val;
        } 
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        else{
        top--;
        }
    }
    void top_element(){
        cout<<arr[top]<<endl;
    }
    void get_size(){
        cout<<top+1<<endl;
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void printing(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    stack s(5);
    s.printing();
    cout<<s.empty()<<endl;
    s.push(5);
    s.printing();
    cout<<s.empty()<<endl;
    s.get_size();
    return 0;
}