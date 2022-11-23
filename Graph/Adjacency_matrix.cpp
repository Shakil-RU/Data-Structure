#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertex,edge;
    cout<<"Enter the number of vertex: ";
    cin>>vertex;
    cout<<endl;
    cout<<"Enter the number of edges: ";
    cin>>edge;

    int adjacencymatrix[vertex][vertex];
    for(int i = 0; i<vertex; i++)
    {
        for(int j = 0; j<vertex; j++)
        {
            adjacencymatrix[i][j]=0;
        }
    }
   
   // Enter the edges for undirected graph
   cout<<"Enter edges: "<<endl;
   for(int i = 0; i<edge; i++)
   {
    int u, v;
    cin>>u>>v;
    if(u>vertex || v>vertex)
    {
        cout<<"invalid edge";
        i--;
    }
    else{
        adjacencymatrix[u][v] = 1;
        adjacencymatrix[v][u] = 1; //skip this for directed graph;
    }
   }

   for(int i = 0; i<vertex; i++)
   {
     for(int j = 0; j<vertex; j++)
     {
       cout<<adjacencymatrix[i][j]<<" ";
     }
     cout<<endl;
   }
    return 0;
}
