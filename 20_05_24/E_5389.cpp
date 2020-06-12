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
#define mod 1000000009

using namespace std;
using i64 = long long;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main() {
    int t;
    scanf("%d", &t);
    
    for (int k = 0; k < t; k++)
    {
        vector <ii64> rd;
        
        i64 n;
        scanf("%lld", &n);
        for (i64 i = 1; i*i <= n; i++)
        {
            if (n%i == 0)
            {
                i64 k1 = i;
                i64 k2 = n/i;
                
                if ((k1+k2)%2 != 0|| (k2-k1)%2 != 0)
                    continue;
                
                rd.push_back({(k1+k2)/2, (k2-k1)/2});
            }
        }
        
        if (rd.empty())
        {
            cout << "IMPOSSIBLE\n";
            continue;
        }
        
        sort(rd.begin(), rd.end());
        cout << rd[0].second << " " << rd[0].first << "\n";
    }
    
    return 0;
}