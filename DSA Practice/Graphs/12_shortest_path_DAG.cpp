#include <bits/stdc++.h>
using namespace std;

// template <typename T>
// class Graph
// {

// public:
//     Graph()
//     {
//     }
//     void addEdge(int u, int v, bool bidir = true)
//     {
//         adj[u].push_back(v);
//         if (bidir)
//         {
//             adj[v].push_back(u);
//         }
//     }
//     void print()
//     {
//         for (auto i : adj)
//         {
//             cout << i.first << "-> ";
//             for (auto j : i.second)
//             {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//     }
//     void dfs_helper(int node, map<int, bool> &visited)
//     {
//         visited[node] = true;
//         cout << node << " ";
//         for (auto i : adj[node])
//         {
//             if (!visited[i])
//             {
//                 dfs_helper(i, visited);
//             }
//         }
//     }

//     void dfs(T src)
//     {
//         map<int, bool> visited;
//         dfs_helper(src, visited);
//     }

//     void bfs(T src, int &nodes)
//     {
//         queue<T> q;
//         q.push(src);
//         map<int, bool> visited;
//         nodes++;
//         visited[src] = true;
//         while (!q.empty())
//         {
//             auto temp = q.front();
//             q.pop();
//             //cout << temp << " ";
//             for (int i : adj[temp])
//             {
//                 if (!visited[i])
//                 {
//                     q.push(i);
//                     visited[i] = true;
//                     nodes++;
//                 }
//             }
//         }
//     }
// };

void topo(int src, int visited[], stack<int> &stk, vector<pair<int, int>> adj[])
{
    visited[src] = 1;
    for (auto it : adj[src])
    {
        if (!visited[it.first])
        {
            topo(it.first, visited, stk, adj);
        }
    }
    stk.push(src);
}

void shortest(int src, int N, vector<pair<int, int>> adj[])
{
    int visited[N] = {0};
    stack<int> st;
    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            topo(i, visited, st, adj);
        }
    }
    int dist[N];
    for (int i = 0; i < N; i++)
    {
        dist[i] = 1e9;
    }
    dist[src] = 0;
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (dist[node] != 1e9)
        {
            for (auto it : adj[node])
            {
                if (dist[node] + it.second < dist[it.first])
                {
                    dist[it.first] = dist[node] + it.second;
                }
            }
        }
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        (dist[i] == 1e9) ? cout << "Unrechable" : cout << "Shortest Time Required to travel from " << 0 << " to " << i << " is => " << dist[i] << "\n";
    }
}

int main()
{
    /*
    
    Code explaination ->

    striver ki video aik baar dekh le 1.25X mai bhot zaruru hai
    

    short discription 

    sabse pahle topo sort se aik stack mai daal lenge values 

    fir stack ke aik aik empty karke usse shortest distance kahaan tak jaata hai woh find karenge 


    
    */
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
    }
    shortest(0, n, adj);
    /*
    6
    7
    0 1 2 0 4 1 
    1 2 3
    2 3 6
    4 2 2 4 5 4
    5 3 1

    0 2 3 6 1 5
    
    */

    // Graph<int> g;
    // g.addEdge(0, 1, false);
    // g.addEdge(0, 4, false);
    // g.addEdge(1, 2, false);
    // g.addEdge(4, 2, false);
    // g.addEdge(4, 5, false);
    // g.addEdge(5, 3, false);
    // g.addEdge(2, 3, false);
    //g.print();

    // int nodes = 0;
    // g.bfs(0, nodes);
    // cout << endl;
    return 0;
}