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


int main() 
{
    int n, q;
    scanf("%d %d", &n, &q);
    
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    int offset = 0;

    for (int i = 0; i < q; i++)
    {
        int t;
        scanf("%d", &t);

        if (t == 1)
        {
            int p, x;
            scanf("%d %d", &p, &x);
            p--;
            p = (p + offset) % n;
            v[p] += x;
        }
        else
        {
            int s;
            scanf("%d", &s);
            if (t == 2)
                s = -s;
            offset = (offset + n + s) % n;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", v[(offset + i) % n]);

    return 0;
}