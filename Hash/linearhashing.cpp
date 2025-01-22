#include <iostream>
using namespace std;
int hashi(int key, int size)
{
    return key % size;
}
void insert(int arr[], int key, int size)
{
    int index = hashi(key, size);
    int originalIndex = index;
    while (arr[index] != -1)
    {
        index = (index + 1) % size;
        if (index == originalIndex)
        {
            cout << "Hash table is full" << endl;
            return;
        }
    }
    arr[index] = key;
}
void printing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = -1;
    }
    insert(arr, 10, size);
    insert(arr, 20, size);
    insert(arr, 30, size);
    insert(arr, 40, size);
    insert(arr, 50, size);
    printing(arr, size);
    return 0;
}