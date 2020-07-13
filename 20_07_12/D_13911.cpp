#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <cstring>
#include <map>
#define xx first
#define yy second
 
using namespace std;
using i64 = long long;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;


struct Edge
{
    Edge(int to_, int w_) : to(to_), w(w_) {}
    int to, w;
};

vector<Edge> edge[300005];
int dist[300005];
bool visited[300005];

vector<ii> calc(int v, int x, vector<int> &m)
{
    memset(dist, -1, sizeof(dist));
    memset(visited, false, sizeof(visited));
    
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    
    for (int i = 0; i < m.size(); i++)
    {
        dist[m[i]] = 0;
        pq.emplace(0, m[i]);
    }
    
    while (!pq.empty())
    {
        auto now = pq.top();
        pq.pop();
        
        if (visited[now.yy])
            continue;
        
        visited[now.yy] = true;
        
        for (auto & e : edge[now.yy])
        {
            int newD = dist[now.yy] + e.w;
            if (dist[e.to] != -1 && dist[e.to] < newD)
                continue;
            dist[e.to] = newD;
            pq.emplace(dist[e.to], e.to);
        }
    }

    vector<ii> ans;
    for (int i = 0; i < v; i++)
    {
        if (0 < dist[i] && dist[i] <= x)
        {
            ans.emplace_back(i, dist[i]);
        }
    }
    
    return ans;
}

int main() 
{
    int v, e;
    scanf("%d %d", &v, &e);
    
    for (int i = 1; i <= e; i++)
    {
        int a, b, t;
        scanf("%d %d %d", &a, &b, &t);
        
        edge[a].emplace_back(b, t);
    }

    int m, x;
    scanf("%d %d", &m, &x);
    vector<int> vm(m);
    for (int i = 0; i < m; i++)
        scanf("%d", &vm[i]);

    int s, y;
    scanf("%d %d", &s, &y);
    vector<int> vs(s);
    for (int i = 0; i < s; i++)
        scanf("%d", &vs[i]);

    vector<ii> ansm;
    vector<ii> anss;

    ansm = calc(v, x, vm);
    for (int i = 0; i < ansm.size(); i++)
    {
        printf("%d %d\n", ansm[i].xx, ansm[i].yy);
    }
    printf("----\n");
    
    anss = calc(v, y, vs);
    for (int i = 0; i < anss.size(); i++)
    {
        printf("%d %d\n", anss[i].xx, anss[i].yy);
    }
    
    return 0;
}