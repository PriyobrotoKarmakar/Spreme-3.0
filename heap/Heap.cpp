#include <bits/stdc++.h>
using namespace std;
class Heap
{
public:
    int capacity;
    int *arr;
    int index;
    Heap(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        index = 0;
    }
    void heapifyUp(int child)
    {
        while (child > 1)
        {
            int parent = child / 2;
            if (arr[parent] < arr[child])
            {
                swap(arr[parent], arr[child]);
            }
            else
            {
                break;
            }
            child = parent;
        }
    }
    void insert(int data)
    {
        if (index == capacity - 1)
        {
            cout << "Heap is full" << endl;
            return;
        }
        index++;
        arr[index] = data;
        heapifyUp(index);
    }

    void printingHeap()
    {
        for (int i = 1; i <= index; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h(10);
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(60);
    h.insert(70);
    h.insert(80);
    h.insert(90);
    h.insert(100);
    h.printingHeap();
    return 0;
}