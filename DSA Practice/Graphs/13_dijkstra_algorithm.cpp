#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, source;
    cout << "Enter Number of veritces and Edges Respectively : ";
    cin >> n >> m;
    vector<pair<int, int>> graph[n + 1];
    int a, b, wt;
    cout << "Enter the values in the graph as the format : Vertex 1, Vertex 2, Weight :\n";
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> wt;
        graph[a].push_back(make_pair(b, wt));
        graph[b].push_back(make_pair(a, wt));
    }
    cout << "Enter the initial source :";
    cin >> source;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n + 1, INT_MAX);
    dist[source] = 0;
    pq.push(make_pair(0, source));
    while (!pq.empty())
    {
        int dis = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        vector<pair<int, int>>::iterator it;
        for (it = graph[prev].begin(); it != graph[prev].end(); it++)
        {
            int next = it->first;
            int nextDistance = it->second;
            if (dist[next] > dist[prev] + nextDistance)
            {
                dist[next] = dist[prev] + nextDistance;
                pq.push(make_pair(dist[next], next));
            }
        }
    }
    cout << "The distance from source " << source << " , are : ";
    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }
    return 0;
}
