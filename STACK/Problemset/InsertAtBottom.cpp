#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top;
        Stack(int size){
            this->size = size;
            this->arr = arr;
            this->top = -1;
        }
};
int main(){
    Stack s(5);
    return 0;
}