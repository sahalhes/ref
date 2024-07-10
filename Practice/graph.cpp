#include <bits/stdc++.h>
using namespace std;
int N=1e3;
int graph1[N][N];
vector<int> graph2[N];
vector<pair<int,int>> graph2wt[N];
// can represent using adjacency matrix and adjacency list
/*
SC - O(V2)
0-1-2 , v=3 , e=2
for adj matr [v][v]
a[i][j]=1 if i and j connected 
for undirected i,j and j,i 1
for directed i,j only 1
if weighted i,j = weight , if not connected INF

*/

/*
SC - O(v+e)
0 1
1 0 2
2 1
*/
int main()
{   
    int n,m;
    cin>>n>>m;
    //O(n2) space for adj matrix
    for(int i=0;i<m;i++){
        cin>>v1>>v2;
        graph1[v1][v2]=1;
        graph1[v2][v1]=1;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);

        graph2wt[v2].push_back({v1,wt});
    }

    // to check connected

    for(pair<int,int> child:graph2[i]){
        if(child.first==j) // connected
        {
            wt=child.second;
        }
    }

    return 0;
}