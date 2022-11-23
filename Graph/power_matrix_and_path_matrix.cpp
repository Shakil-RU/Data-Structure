#include<bits/stdc++.h>
using namespace std;

int main()
{
   int vertex, edge;
   cout<<"Enter the number of vertex: "<<endl;
   cin>>vertex;
   cout<<"Enter the number of edge: "<<endl;
   cin>>edge;
   int adjacentmatrix[vertex+1][vertex+1];
   memset(adjacentmatrix,0,sizeof(adjacentmatrix));

   cout<<"enter edges"<<endl;
   for(int i = 1; i<=edge; i++)
   {
    int u,v;
    cin>>u>>v;
    adjacentmatrix[u][v] = 1;
   }
   cout<<"Adjacency matrix is: "<<endl;

   for(int i= 1; i<=vertex; i++)
   {
      for(int j = 1; j<=vertex; j++)
      {
        cout<<adjacentmatrix[i][j]<<" ";
      }
      cout<<endl;
   }

   int powmatrix[vertex+1][vertex+1][vertex+1];
   for(int i=1; i<=vertex; i++)
   {
    for(int j = 0; j<=vertex; j++)
    {
        powmatrix[1][i][j] = adjacentmatrix[i][j];
    }
   }


   for(int i = 2; i<=vertex; i++)
   {
    for(int j = 1; j<=vertex; j++)
    {
        for(int k = 1; k<=vertex; k++)
        {
            int temp = 0;
            for(int l = 1; l<=vertex; l++)
            {
               temp = temp + powmatrix[i-1][j][l]*adjacentmatrix[l][k];
            }
            powmatrix[i][j][k] = temp;
        }
    }
   }

cout<<endl<<endl;
cout<<"power matrix are: "<<endl;
for(int i = 1; i<=vertex; i++)
{
    for(int j = 1; j<=vertex; j++)
    {
    for(int k = 1; k<=vertex; k++)
    {
        cout<<powmatrix[i][j][k]<<" ";
    }
    cout<<endl;
    }
    cout<<endl<<endl;
}
//Br matrix

int Br[vertex+1][vertex+1];
memset(Br,0,sizeof(Br));
for(int i= 1; i<vertex; i++)
{
    for(int j = 0; j<vertex; j++)
    {
        for(int k = 1; k<vertex; k++)
        {
            Br[j][k] += powmatrix[i][j][k];
        }
    }
}

cout<<"path matrix is: "<<endl;
int path_matrix[vertex+1][vertex+1];
int count = 0;
for(int i = 1; i<vertex; i++)
{
    for(int j = 0; j<vertex; j++)
    {
       cout<<Br[i][j]<<" ";
       if(Br[i][j]==0)
       {
        count++;
       }
    }
    cout<<endl;
}

cout<<endl;

if(count==0)
{
    cout<<"strongly connected"<<endl;
}
else{
    cout<<"not strongly connected"<<endl;
}

    return 0;
}
