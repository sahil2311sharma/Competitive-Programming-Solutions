#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph
{
private:
    map<int, list<int>> adj;

public:
    Graph()
    {
    }
    void addEdge(T u, T v, bool bidir = false)
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
    void bfs(T src)
    {
        map<int, bool> visited;
        queue<T> q;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (auto i : adj[node])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
};
int main()
{
    Graph<int> g;
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(3, 6);
    g.addEdge(4, 5);
    g.addEdge(5, NULL);
    g.addEdge(7, 2);
    g.addEdge(7, 8);
    g.addEdge(8, 9);
    g.addEdge(9, 7);
    g.print();

    return 0;
}