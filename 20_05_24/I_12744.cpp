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
 
using namespace std;
using i64 = long long;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

bool is_ok(vector<ii> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i+1 != v[i].first || v[i].second != 1)
            return false;
    }
    return true;
}

vector<ii> flip(vector<ii> v, int k)
{
    reverse(v.begin(), v.begin() + k);
    
    for (int i = 0; i < k; i++)
    {
        v[i].second = (v[i].second + 1) % 2;
    }
    
    return v;
}

int main() {
    int n;
    scanf("%d", &n);
    
    vector<ii> v(n);
    for (int i = 0; i < n; i++)
    {
        char t;
        scanf("%d %c", &v[i].first, &t);
        
        if (t == '+')
            v[i].second = 1;
        else
            v[i].second = 0;
    }
    
    queue<vector<ii>> q;
    map<vector<ii>, int> m;
    q.push(v);
    m[v] = 0;
    while (!q.empty())
    {
        vector<ii> check = q.front();
        q.pop();
        
        if (is_ok(check, n))
        {
            printf("%d", m[check]);
            break;
        }
        
        for (int i = 0; i < n; i++)
        {
            vector <ii> input = flip(check, i+1);
            
            if (m.find(input) != m.end())
                continue;
            
            q.push(input);
            m[input] = m[check] + 1;
        }
    }
    
    return 0;
}