#include<bits/stdc++.h>
using namespace std;

int max_stk = 10;
int top = -1;
int stk[10];

bool isempty()
{
    return top == -1;
}

bool isfull()
{
    return top == max_stk-1;
}

void push(int data)
{
    if(!isfull())
    {
       stk[++top] = data;
       ///top = top+1;
    }
    else{
        cout<<"stack is full";
    }
}

int pop()
{
    int data;
    if(isempty())
    {
        return -1;
    }
    return stk[top--];
}

void print()
{
    for(int i = top; i >= 0; i--) {
        cout << stk[i] << " ";
    }
    cout << endl;
}
int main()
{
  push(20);
  push(30);
  push(40);
  push(50);
  push(60);
  push(70);
  push(80);
  pop();
  pop();
  pop();
  pop();
  print();

    return 0;
}
