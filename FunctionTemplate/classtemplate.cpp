// Class template: create classes thata can handle different datatypes in a single class definition
#include <iostream>
using namespace std;

template <typename T>
class MyClass
{
    T value;

public:
    MyClass(T val) : value(val) {};
    T getValue() { return value; }
};

int main()
{
    MyClass<int> intObj(10);
    MyClass<double> doubleObj(3.1415);

    cout << "Int value: " << intObj.getValue() << endl;
    cout << "Double value: " << doubleObj.getValue() << endl;

    return 0;
}