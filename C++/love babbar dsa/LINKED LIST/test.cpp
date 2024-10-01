
#include <iostream>
using namespace std;

void printBinary(int num) { 
    if (num == 0) {
        cout << "0";
        return;
    }

    int highestBit = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 2;
        highestBit++;
    }

    for (int i = highestBit - 1; i >= 0; --i) {
        int divisor = 1;
        for (int j = 0; j < i; ++j) {
            divisor *= 2;
        }
        int bit = num / divisor % 2;
        cout << bit;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<(1<<n);i++) {
        printBinary(i);
        cout<<"\n";
    }   
}