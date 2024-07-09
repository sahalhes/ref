void add(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    // adj[v].push_back(u); undirected graph
    
}

void BFS(vector<int> adj[],int v,int s){
    vector<bool>visited(v,false);
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}

vector<int> BFSvector(vector<int>adj[],int v){
    vector<bool>visited(v,false);
    vector<int> ans;
    queue<int>q;
    visited[0]=true; //first node as visited
    q.push(0);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        ans.push_back(u);
        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
    return ans;
}

int main(){
    int v=u;
    vector<int>adj[v];
    add(adj,0,1);
    add(adj,0,2);
}

