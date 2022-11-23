#include<bits/stdc++.h>
using namespace std;
int rear = -1;
int front = -1;
int size = 10;
int q[10];

int isempty()
{
    if(front&&rear == -1)
    {
        return -1;
    }
    else{
        return 0;
    }
}

int isfull()
{
    if(rear == size)
    {
        return -1;
    }
    else{
        return 0;
    }
}

void enqueue(int data)
{
    if(!isfull())
    {
        rear&&front == 1;
        q[rear] = data;
    }
    rear++;
}

void dequeue()
{
    if(!isempty())
    {
        front = q[front];
    }
    front++;
}

void display()
{
    cout<<"queue is as follows: "<<endl;
    for(int i = front; i<rear; i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    dequeue();
    display();



    return 0;
}
