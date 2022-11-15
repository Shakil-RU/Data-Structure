#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int item)
{
    int low = 0, high = n-1, mid;
    while(low <= high) {
        mid = (low+high)/2;
    if(item == a[mid])
    {
        return mid;
    }
    else if(item < a[mid])
    {
       high = mid - 1;
    }
    else{
        low = mid + 1;
    }
    }
    return -1;
}

int main()
{

    int n;
    cout<<"number of elements: " ;
    cin>>n;
    int a[100];
    cout<<"Enter element of array: " ;
    for(int i = 0; i<n; i++)
    {

        cin>>a[i];
    }
    cout<<"array are: ";
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int item = 77;

    int index = binary_search(a, n, item);

    if (index == -1)
    {
        cout<<" Not found" <<endl;
    }
    else
    {
        cout<< "index of element: "<<index+1<<endl;
    }

    return 0;
}
