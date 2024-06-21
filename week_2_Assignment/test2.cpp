
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Number 1: ";
    if (num1 > 0) {
        cout << "Positive";
    } else if (num1 < 0) {
        cout << "Negative";
    } else {
        cout << "Zero";
    }

    cout << "\nNumber 2: ";
    if (num2 > 0) {
        cout << "Positive";
    } else if (num2 < 0) {
        cout << "Negative";
    } else {
        cout << "Zero";
    }

    return 0;
}

if(ch>='0' && (int)(ch)<='9'){
    cout<<"Digit";
}