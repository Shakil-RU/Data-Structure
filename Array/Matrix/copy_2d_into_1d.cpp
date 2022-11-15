#include<bits/stdc++.h>
using namespace std;
int main()
{
int row, col;
cout<<"enter row and colum: ";
cin>>row>>col;
int a[row][col];
cout<<"insert elements into 2D array: ";

for(int i = 0; i<row; i++)
{
    for(int j =0; j<col; j++)
    {
        cin>>a[i][j];
    }
}

cout<<"2D array is as follows: \n";

for(int i = 0; i<row; i++)
{
    for(int j = 0; j<col; j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout << endl;
}
cout<<endl;
int D1_a[row*col];
int index = 0;
for(int i = 0; i<row; i++)
{
    for(int j = 0; j<col; j++)
    {
        D1_a[index++] = a[i][j];

    }
}
cout<<"1d_array is as follows: ";

for(int i = 0; i<index; i++)
{
    cout<<D1_a[i]<<" ";

}
cout<<endl;
return 0;
}

