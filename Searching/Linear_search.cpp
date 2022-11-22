#include<bits/stdc++.h>
using namespace std;

void linear_search(int a[], int size, int item)
{
    if(size == 0)
    {
        cout<<"Array is Empty"<<endl;
    }
    for(int i = 0; i<size; i++)
    {
        if(a[i] == item)
        {
            cout<<item<<" is found at position "<<i<<endl;
            return;
        }
    }
    cout<<"Item is not Found"<<endl;
}

int main()
{
    int a[] = {2,1,3,4,5,20,10,30,40,60,70,80,90};
    int size;
    size = sizeof(a)/sizeof(a[0]);
    cout<<"Size of Array: "<<size<<endl;
    int x;
    cout<<"Enter the number which you want to search: ";
    cin>>x;
    linear_search(a,size,x);
    return 0;
}
