#include <bits/stdc++.h>
using namespace std;

int parent[100000];
int rank[100000];
void makeSet()
{
    for (int i = 1; i <= N; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}
int findPair(int node)
{
    if (node == parent[node])
    {
        return node;
    }
    return parent[node] = findPair(parent[node]);
}

void unionn(int u, int v)
{
    u = findPair(u);
    v = findPair(v);
    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[u] > rank[v])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        unionn(u, v);
    }
    if (findPair(2) != findPair(3))
    {
        cout << "Belong to different Component";
    }
    else
    {
        cout << "Belong to Component";
    }
    return 0;
}