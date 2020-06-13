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
    int k;
    scanf("%d", &k);

    set<i64> s[12];
    
    int kk = k;
    s[1].insert(kk);
    for (int i = 2; i <= 8; i++)
    {
        kk = kk * 10 + k;
        s[i].insert(kk);
        
        for (int j = 1; j < i; j++)
        {
            for (auto si : s[i-j])
            {
                for (auto sj : s[j])
                {
                    s[i].insert(si + sj);
                    s[i].insert(si - sj);
                    s[i].insert(si * sj);
                    if (sj != 0)
                        s[i].insert(si / sj);
                }
            }
        }
    }
    
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        
        int ans = -1;
        for (int j = 1; j <= 8; j++)
        {
            if(s[j].find(x) != s[j].end())
            {
                ans = j;
                break;
            }
        }
        if (ans == -1)
            printf("NO\n");
        else
            printf("%d\n", ans);
    }
    
    return 0;
}