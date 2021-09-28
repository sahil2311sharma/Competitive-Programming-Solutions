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
    void bfs(T src)
    {
        /*
        queue<T> q;
        map<T, bool> visited;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            T node = q.front();
            cout << node << "-> ";
            q.pop();
            for (int neighbour : adj[node])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        */
        /*queue<T> q;
        map<T, bool> visited;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            cout << node << "-> ";
            for (int neighbour : adj[node])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        */

        queue<T> q;
        q.push(src);
        map<T, bool> visited;
        visited[src] = true;
        while (!q.empty())
        {
            T node = q.front();
            cout << " " << node;
            q.pop();
            for (int neighbour : adj[node])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        /*
        queue<T> q;
        q.push(src);
        map<int, bool> visited;
        visited[src] = true;
        while (!q.empty())
        {
            int node = q.front();
            cout << node << "-> ";
            q.pop();
            for (int neightbour : adj[node])
            {
                if (!visited[neightbour])
                {
                    q.push(neightbour);
                    visited[neightbour] = true;
                }
            }
        }*/
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
    g.bfs(0);
}