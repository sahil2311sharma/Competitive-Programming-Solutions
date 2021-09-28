#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph
{
private:
    map<T, list<T>> adj;

public:
    Graph()
    {
    }
    void addEdge(T u, T v, bool bidir = true)
    {
        adj[v].push_back(u);
        if (bidir)
        {
            adj[u].push_back(v);
        }
    }
    void dfsHelper(T node, map<T, bool> &visited)
    {
        visited[node] = true;
        cout << node << "->";
        for (int neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                dfsHelper(neighbour, visited);
            }
        }
    }
    void dfs(T src)
    {
        map<T, bool> visited;
        dfsHelper(src, visited);
    }

    void dfs_helper(T node, map<int, bool> &visited)
    {
        visited[node] = true;
        cout << node << " ";
        for (int neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                dfs_helper(neighbour, visited);
            }
        }
    }
    void dfs2(T src)
    {
        map<T, bool> visited;
        dfs_helper(src, visited);
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(0, 4);
    g.addEdge(2, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(3, 4);
    g.dfs2(0);
    return 0;
}