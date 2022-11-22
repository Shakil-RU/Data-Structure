#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int heap[100];
    int size = 0;

    Heap(){
      heap[0] = -1;
      size = 0;
    }

void insert(int value)
{
  size = size +1;
  int index = size;
  heap[index] = value;
  while(index>1)
  {
    int parent = index/2;
    if(heap[parent] < heap[index])
    {
        swap(heap[parent],heap[index]);
        index = parent;
    }
    else{
        return;
    }
  }
}

void delete_root()
{
    if(size == 0)
    {
        cout<<"heap is empty!"<<endl;;
        return;
    }
    heap[1] = heap[size];
    size = size -1;
    int i = 1;
    while(i<size)
    {
        int leftindex = 2*i;
        int rightindex = 2*i + 1;
        if(leftindex<size && heap[i]<heap[leftindex])
        {
            swap(heap[i],heap[leftindex]);
            i = leftindex;
        }
        else if(rightindex<size && heap[i] < heap[rightindex])
        {
            swap(heap[i],heap[rightindex]);
            i = rightindex;
        }
        else{
            return;
        }
    }
}

void print_heap()
{
    for(int i = 1; i<=size; i++)
    {
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

};

int main()
{
    Heap heap;
    heap.insert(125);
    heap.insert(120);
    heap.insert(40);
    heap.insert(60);
    heap.insert(100);
    heap.insert(75);
    heap.insert(58);
    heap.insert(31);
    heap.print_heap();
    heap.delete_root();
    heap.print_heap();
    
    return 0;
}
