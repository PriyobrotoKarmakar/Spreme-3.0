// Custom Exception handling
#include <iostream>
#include <exception>
#include <string>
using namespace std;

class CustomException : public exception
{
    string message;

public:
    CustomException(const string &msg) : message(msg) {}
    const char *what() const noexcept override
    {
        return message.c_str();
    }
};
int main()
{
    try
    {
        throw CustomException("Something went wrong!!!");
    }
    catch (const CustomException &e)
    {
        cout << "Caught custom exception: " << e.what() << endl;
    }
    return 0;
}