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
        //time complexity of heapifyUp is O(logn) because
        //it is going to the height of the tree
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
    void heapifyDown(int parent)
    {
        //time complexity of heapifyDown is O(logn) because 
        //it is going to the height of the tree
        int left = 2 * parent;
        int right = 2 * parent + 1;
        int largest = parent;
        if (left <= index && arr[left] > arr[largest])
            largest = left;
        if (right <= index && arr[right] > arr[largest])
            largest = right;

        if (largest != parent)
        {
            swap(arr[parent], arr[largest]);
            heapifyDown(largest);
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
    void remove()
    {
        if (index == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }
        arr[1] = arr[index];
        index--;
        heapifyDown(1);
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

    h.remove();
    h.printingHeap();
    h.remove();
    h.printingHeap();
    h.remove();
    h.printingHeap();
    h.remove();
    h.printingHeap();
    h.remove();
    h.printingHeap();
    h.remove();
    h.printingHeap();
    h.remove();
    h.printingHeap();
    h.remove();
    h.printingHeap();
    h.remove();
    h.printingHeap();
    h.remove();
    return 0;
}