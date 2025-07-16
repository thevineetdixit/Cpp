// graph representation using adjacency matrix
#include<bits/stdc++.h>
using namespace std;

//adjacency matrix(for weighted undirected)

int main()
{
    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<bool> >adjmat(vertex,vector<bool>(vertex,0)); 

    int u,v,weight;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>weight; 
        adjmat[u][v]=weight;
        adjmat[v][u]=weight;
    }

    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        cout<<adjmat[i][j]<<" ";

        cout<<endl;
    }
}