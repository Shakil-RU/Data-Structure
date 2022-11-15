#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n1,n2, m;
    int a1[10], a2[10], a[20];
    cout<<"enter the size of first array: "<<endl;
    cin>>n1;
    cout<<"enter the size of second array: "<<endl;
    cin>>n2;
    cout<<"insert the elements of first array: "<<endl;
    for(int i = 0; i<n1; i++)
    {

        cin>>a1[i];
    }
    cout<<"first array are: " ;
    for(int i = 0; i<n1; i++)
    {

        cout<< a1[i]<< " ";
    }
    cout<<endl;
    cout<<"enter the second arrays elements: " ;

    for(int i = 0; i<n2; i++)
    {

        cin>>a2[i];

    }
    cout<<"second array are: " ;
    for(int i = 0; i<n2; i++)
    {

        cout<<a2[i]<<" " ;
    }
    cout<<endl;

    m = n1 + n2 ;
    int index = 0;

    for(int i = 0; i<n1 ;i++)
    {
        a[index] = a1[i];
        index ++;
    }
    for(int i = 0; i<n2; i++)
    {
        a[index] = a2[i];
        index ++;

    }
   cout<<"final array are: ";
   for(int i = 0; i<m; i++)
   {
       cout<<a[i]<< " ";
   }
   cout<<endl;

    return 0;
}
