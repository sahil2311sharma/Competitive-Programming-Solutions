#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<int, list<int>> adj;

public:
    Graph()
    {
    }
    void addEdge(int u, int v, bool bidir = true)
    {
        adj[u].push_back(v);
        if (bidir)
        {
            adj[v].push_back(u);
        }
    }
    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    void dfs_helper(int node, map<int, bool> &visited)
    {
        visited[node] = true;
        cout << node << " ";
        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                dfs_helper(i, visited);
            }
        }
    }

    void dfs(T src)
    {
        map<int, bool> visited;
        dfs_helper(src, visited);
    }

    void bfs(T src, int &nodes)
    {
        queue<T> q;
        q.push(src);
        map<int, bool> visited;
        nodes++;
        visited[src] = true;
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            //cout << temp << " ";
            for (int i : adj[temp])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                    nodes++;
                }
            }
        }
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1, false);
    g.addEdge(0, 4, false);
    g.addEdge(1, 2, false);
    g.addEdge(4, 2, false);
    g.addEdge(4, 5, false);
    g.addEdge(5, 3, false);
    g.addEdge(2, 3, false);
    //g.print();

    int nodes = 0;
    g.bfs(0, nodes);
    cout << endl;
    return 0;
}