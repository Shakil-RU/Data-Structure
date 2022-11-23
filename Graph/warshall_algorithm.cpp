#include<bits/stdc++.h>
using namespace std;

int matrix[20][20];
int main()
{
    int vertex;
    int edge;
    cout<<"Enter number of vertex"<<endl;
    cin>>vertex;
    cout<<"Enter the number of edge"<<endl;
    cin>>edge;
    int matrix[vertex][vertex];
    cout<<"Enter the matrix"<<endl;
    for(int i = 0; i<vertex; i++)
    {
       for(int j = 0; j<vertex; j++)
       {
        cin>>matrix[i][j];
       }
    }

    cout<<"p[0] matrix is: "<<endl;
    for(int i = 0; i<vertex; i++)
    {
        for(int j = 0; j<vertex; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
for(int k = 0; k<vertex; k++)
{
    for(int i = 0; i<vertex; i++)
    {
        for(int j = 0; j<vertex; j++)
        {
            matrix[i][j] = matrix[i][j]?matrix[i][j]:(matrix[i][k] && matrix[k][j]);
        }
    }
}

cout<<"path matrix p[4] is as follows: "<<endl;
for(int i = 0; i<vertex; i++)
{
    for(int j = 0; j<vertex; j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

return 0;

}
