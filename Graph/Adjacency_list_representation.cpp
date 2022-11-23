#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adjlist;

void addedge(int u, int v)
{
   adjlist[u].push_back(v);
   adjlist[v].push_back(u);
}

int main()
{
    cout<<"Enter the vertex: ";
    int vertex;
    cin>>vertex;
    adjlist.resize(vertex);
    int e;
    cout<<"Enter the number of Edge: ";
    cin>>e;
    cout<<"Enter the edge"<<endl;
    for(int i = 0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        addedge(u,v);
    }

    cout<<"Adjacency List are: "<<endl;
    for(int i = 0; i<vertex; i++)
    {
        cout<<i<<"--> ";
        for(auto j: adjlist[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
