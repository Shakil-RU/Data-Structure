#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n)
{
    for(int j = 0; j<n; j++)
    {
        for(int k = 0; k<n-j-1; k++)
        {
            if(a[k]>a[k+1])
            {
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }

}

void print(int a[], int n)
{

    for(int i = 0; i<n; i++)
    {

        cout<<a[i]<< " ";
    }
    cout<<endl;
}


int main()
{
    cout<<"enter the size"<<endl;
    int n;
    cin>>n;
    int a[100];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"before sorting "<<endl;
    print(a, n);
    bubble_sort(a,n);
    cout<<"after sorting"<<endl;
    print(a, n);

    return 0;
}
