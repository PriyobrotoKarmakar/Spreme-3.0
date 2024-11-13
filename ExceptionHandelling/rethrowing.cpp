#include <iostream>
#include <stdexcept>
using namespace std;
gggeeegegegegegeg
void process()
{
    try
    {
        throw runtime_error("An error occured in process.");
    }
    catch (const exception &e)
    {
        cout << "Caught in process function. " << e.what() << endl;
        throw; // rethrowing the same exception
    }
}
int main()
{
    try
    {
        process();
    }
    catch (const exception &e)
    {
        cout << "Caught in main function: " << e.what() << endl;
    }
    return 0;
}