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
            cout << i.first << "->";
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
        q.push(src);
        map<int, bool> visited;
        visited[src] = true;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << "-> ";
            for (int i : adj[node])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
    void check_cycle(T src)
    {
        bool check = false;
        map<int, bool> visited;
        queue<pair<int, int>> q;
        q.push(make_pair(src, -1));
        visited[src] = true;
        while (!q.empty())
        {

            pair<int, int> temp = q.front();
            int parent = temp.first;
            int child = temp.second;
            q.pop();
            for (int neighbour : adj[parent])
            {
                if (!visited[neighbour])
                {
                    q.push(make_pair(neighbour, parent));
                    visited[neighbour] = true;
                }
                else if (neighbour != parent)
                {
                    check = true;
                    break;
                }
            }
        }
        if (check)
        {
            cout << "It has a cycle";
        }
        else
        {
            cout << "It doesn't has a cycle";
        }
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);
    g.addEdge(0, 4);
    g.addEdge(6, 5);
    g.addEdge(6, 2);
    g.check_cycle(0);
    /*
    3
    |
    |
    |
    1-------0-------4
    |       |
    |       |
    |       |
    |       |
    6-------2
    
    
    */
    return 0;
}