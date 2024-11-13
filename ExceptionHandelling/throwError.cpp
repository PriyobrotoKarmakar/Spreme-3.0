// Multiple catch block example
#include <iostream>
using namespace std;
void testExceptions(int number)
{
    if (number == 0)
    {
        throw invalid_argument("invalid argument: number cannot be zero");
    }
    if (number == 1)
    {
        throw runtime_error("Runtime error occured ");
    }
    if (number == 2)
    {
        throw number;
    }
}
int main()
{
    try
    {
        testExceptions(2);
    }
    catch (const std::invalid_argument &e)
    {
        cout << "Caught invalid argument exception " << e.what() << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Caught a runtime error " << e.what() << endl;
    }
    catch (...)
    {
        cout << "Caught an unknown exception " << endl;
    }
    return 0;
}