#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#define xx first
#define yy second
 
using namespace std;
using i64 = long long;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

bool desc(int a, int b){ return a > b; };

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        scanf("%d", &v[i]);
    
    for (int i = 0; i < m-1; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            if (v[i]+v[j] <= n)
                v.push_back(v[i]+v[j]);
        }
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    vector<int> d(n+1, 10005);
    d[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        set<int> s;
        for (int j = 0; j < v.size(); j++)
        {
            if (i - v[j] >= 0)
                s.insert(d[i - v[j]] + 1);
            else
                s.insert(10005);
        }
        d[i] = *s.begin();
    }

    if (d[n] >= 10005)
    {
        printf("-1");
        return 0;
    }
    printf("%d", d[n]);
    return 0;
}