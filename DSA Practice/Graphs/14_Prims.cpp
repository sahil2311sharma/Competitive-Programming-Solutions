/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < n; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back(make_pair(b, w));
        graph[b].push_back(make_pair(a, w));
    }
    int key[n];
    int parent[n];
    bool mst[n];
    for (int i = 0; i < n; i++)
    {
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < n - 1; count++)
    {
        int mini = INT_MAX, u;
        for (int v = 0; v < n; v++)
        {
            if (mst[v] == false and key[v] < mini)
            {
                mini = key[v];
                u = v;
            }
        }
        mst[u] = true;
        for (auto it : graph[u])
        {
            int v = it.first;
            int w = it.second;
            if (mst[v] == false and w < key[v])
            {
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        cout << parent[i] << "---" << i << "\n";
    }
    return 0;
}*/

/*

6
0 1 2
0 3 6
1 3 8
1 4 5
1 2 3
2 4 7
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, m;
    cin >> N >> m;

    // N = Total number of nodes / Total number of vertex
    // m = Total number of paths

    vector<pair<int, int>> adj[N];

    int a, b, wt;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> wt;
        adj[a].push_back(make_pair(b, wt));
        adj[b].push_back(make_pair(a, wt));
    }

    int parent[N];

    int key[N];

    bool mstSet[N];

    for (int i = 0; i < N; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    key[0] = 0;
    parent[0] = -1;
    int ansWeight = 0;
    for (int count = 0; count < N - 1; count++)
    {

        int mini = INT_MAX, u;

        for (int v = 0; v < N; v++)
            if (mstSet[v] == false && key[v] < mini)
                mini = key[v], u = v;

        mstSet[u] = true;

        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;
            if (mstSet[v] == false && weight < key[v])
                parent[v] = u, key[v] = weight;
        }
    }

    for (int i = 1; i < N; i++)
        cout << parent[i] << " - " << i << " \n";
    return 0;
}

/*
6
0 1 2
0 3 6
1 3 8
1 4 5
1 2 3
2 4 7
*/