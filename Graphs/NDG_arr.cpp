#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];

    for(int i =0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    */
    //if directed graph u->v;
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);

    }
    for (int i = 1; i <= n; i++) {
        cout << "Vertex " << i << " -> ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;

}
