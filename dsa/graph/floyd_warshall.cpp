#include <bits/stdc++.h>
using namespace std;

const int INF=INT_MAX;
void floyd_warshall(vector<vector<int>>&dist, int V) {
    
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][k]!=INF && dist[k][j]!=INF && 
                    dist[i][k]+dist[k][j]<dist[i][j]
                )
                dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }

    // print distances
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
        if(dist[i][j]==INF) cout<<"dist from "<<i<<" to "<<j<<" is INF";
        else cout<<"dist from "<<i<<" to "<<j<<" is "<<dist[i][j];
        cout<<endl;
        }
        
    }

}

int main() {
    int V = 5;
    vector<vector<pair<int,int>>> adj(V);

    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({2, 4});
    adj[2].push_back({0, 4});

    adj[1].push_back({2, 1});
    adj[2].push_back({1, 1});

    adj[1].push_back({3, 7});
    adj[3].push_back({1, 7});

    adj[2].push_back({4, 3});
    adj[4].push_back({2, 3});

vector<vector<int>> dist(V, vector<int>(V, INF));

for (int i = 0; i < V; i++)
    dist[i][i] = 0;

for (int i = 0; i < V; i++) {
    for (auto nbr : adj[i]) {
        dist[i][nbr.first] = nbr.second;
    }
}

    floyd_warshall(dist, V);

    return 0;
}
