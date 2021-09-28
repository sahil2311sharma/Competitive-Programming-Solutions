#include <bits/stdc++.h>
using namespace std;

class Graph
{
private:
    map<int, list<int>> adj;
    int v = adj.size();

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
            v++;
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << " " << j;
            }
            cout << endl;
        }
        cout << v;
    }
    void bfs(int src)
    {
        queue<int> q;
        q.push(src);
        map<int, bool> visited;
        visited[src] = true;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (int neighbour : adj[node])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }
    bool detectCycle(int x, map<int, bool> &visited)
    {
        queue<pair<int, int>> q;
        q.push({x, -1});
        visited[x] = true;
        while (!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for (int neighbour : adj[node])
            {
                if (!visited[neighbour])
                {
                    q.push({neighbour, node});
                    visited[neighbour] = true;
                }
                else if (neighbour != parent)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool checkCycle(int src, int v)
    {
        map<int, bool> visited(v, 0);
        for (int i : adj)
        {
            if (!visited[i])
            {
                if (detectCycle(i, visited))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);
    g.addEdge(0, 4);
    g.addEdge(6, 5);
    g.addEdge(6, 2);
    g.print();
    //g.bfs(0);
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