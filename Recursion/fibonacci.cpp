#include<bits/stdc++.h>
using namespace std;

int fibonacci(int i)
{
    if(i == 0)return 0;
    else if(i == 1)return 1;
    else{
      return fibonacci(i-1)+fibonacci(i-2);
    }
}

int main()
{
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int fib;
    cout<<"fibonacci sequence for the number " <<n<< " are: "<<endl;
    for(int i = 0; i<=n; i++)
    {
       fib = fibonacci(i);
       cout<<fib<<" ";
    }
    cout<<endl;
    return 0;
}
