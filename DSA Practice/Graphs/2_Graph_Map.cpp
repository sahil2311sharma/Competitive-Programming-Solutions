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
    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << " " << j;
            }
            cout << "\n";
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
    return 0;
}