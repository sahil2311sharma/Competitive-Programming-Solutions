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
                cout << " " << j;
            }
            cout << endl;
        }
    }
    void bfs(T src)
    {
        queue<T> q;
        map<T, int> dist;
        map<T, T> parent;
        for (auto i : adj)
        {
            dist[i.first] = INT_MAX;
        }
        q.push(src);
        dist[src] = 0;
        parent[src] = src;
        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            cout << node << "->";
            for (int neighbour : adj[node])
            {
                if (dist[neighbour] == INT_MAX)
                {
                    q.push(neighbour);
                    dist[neighbour] = dist[node] + 1;
                    parent[neighbour] = node;
                }
            }
        }
        for (auto i : adj)
        {
            T node = i.first;
            cout << "Distance of " << node << " from " << src << " is " << dist[node] << endl;
        }
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
    g.print();
    g.bfs(0);
    return 0;
}