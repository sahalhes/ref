#include <bits/stdc++.h>
using namespace std;
int N=1e5+10;
int INF=1e9+10;
vector<pair<int,int>> g[N];


void dijkstra(int s){
    vector<int> vis(N,0);
    vector<int> dist(N,INF);
    set<pair<int,int>> st; //wt first, set already sorted

    st.insert({0,s});
    dist[s]=0;

    while(st.size()>0){
        auto node=*st.begin();
        int v_dist=node.first;
        int v=node.second;
        st.erase(st.begin());
        if(vis[v]) continue;
        vis[v]=1;

        for(auto child:g[v]){
            int child_v=child.first;
            int wt=child.second;
            if(dist[v]+wt<dist[child_v]){
                dist[child_v]=dist[v]+wt;
                st.insert({dist[child_v],child_v});
            }

        }
    }

}

int main()
{   
    int n,m;
    for(int i=0;i<m;i++){
        int x,y,wt;
        cin >> x>> y>>wt;
        g[x].push_back({y,wt});
    }
    return 0;
}