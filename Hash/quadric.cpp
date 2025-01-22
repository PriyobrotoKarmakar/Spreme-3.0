#include <iostream>
using namespace std;
int hashKey(int key, int size)
{
    return key % size;
}
#include<vector>
int insert(vector<int>arr, int size, int key)
{
    int index = hashKey(key, size);
    int OgIndex = index;
    int i = 1;
    while (arr[index] != -1)
    {
        index = (index + (i * i)) % size;
    }
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        arr[i] = -1;
    }
    return 0;
}