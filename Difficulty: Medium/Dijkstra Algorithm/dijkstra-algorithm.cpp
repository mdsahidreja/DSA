//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User Function Template
class Solution {
  public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int source) {
        // Code here
        //build the min heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        vector<int> result(adj.size(), INT_MAX);//at first every node is infinity
        result[source] = 0;//distance from source to source is 0
        pq.push({0, source});//push the better path for source in the min heap
        
        while(!pq.empty()){
            int node = pq.top().second;
            int distance = pq.top().first;
            pq.pop();
            
            for(auto p: adj[node]){
                int adjNode = p.first;
                int weight = p.second;
                
                if(distance+weight < result[adjNode]){
                    result[adjNode] = distance+weight;
                    pq.push({distance+weight, adjNode});
                }
            }
            
        }
        return result;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> adj(V);
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            pair<int, int> t1 = {v, w}, t2 = {u, w};
            adj[u].push_back(t1);
            adj[v].push_back(t2);
        }
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(adj, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends