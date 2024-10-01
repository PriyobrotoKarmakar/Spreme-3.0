#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class complex{
public:
    int real;
    int imag;
    complex(int real,int imag){
        this->real = real;
        this->imag = imag;
    }
    void display(){
        if(imag<0){
            printf("[%d - i%d]\n",real,abs(imag));
            return;
        }
        printf("[%d + i%d]\n",real,imag);
    }
    complex operator+(const complex &b){
        complex temp(0,0);
        temp.real = this->real+b.real;
        temp.imag = this->imag+b.imag;
        return temp;
    }
    complex operator-(const complex &b){
        complex temp(0,0);
        temp.real = this->real-b.real;
        temp.imag = this->imag-b.imag;
        return temp;
    }
    bool operator==(const complex &b){
        return this->real==b.real && this->imag==b.imag;
    }

};
int main(){
    complex c1(10,20);
    complex c2(20,30);
    c1.display();
    c2.display();
    complex c3 = c1 + c2;
    c3.display();
    complex c4 = c1 - c2;
    c4.display();
    cout<<(c1==c2)<<endl;
    return 0;
}