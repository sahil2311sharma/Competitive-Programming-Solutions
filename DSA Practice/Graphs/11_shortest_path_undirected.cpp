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
            cout << temp << " ";
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

    void shortest_path(T src, T last, int nodes)
    {
        vector<int> v(nodes, INT_MAX);
        queue<int> q;
        q.push(src);
        v[src] = 0;
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            for (auto i : adj[temp])
            {
                if (v[temp] + 1 < v[i])
                {
                    v[i] = v[temp] + 1;
                    q.push(i);
                }
            }
        }
        for (int i = 0; i < nodes; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\nShortest Distance from " << src << " to " << last << " is : " << v[last - 1];
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 6);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    g.addEdge(6, 7);
    g.addEdge(7, 8);
    g.addEdge(6, 8);
    /*g.print();

    cout << endl;
    g.dfs(0);

    cout << endl;
    

    */

    int nodes = 0;
    g.bfs(0, nodes);
    cout << endl;

    g.shortest_path(0, 6, nodes);
    return 0;
}