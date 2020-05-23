#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <string>
#include <queue>
#include <stack>
#include <set>
 
using namespace std;
using i64 = long long;
using ii = pair<int, int>;

int     main()
{
    int n;
    scanf("%d", &n);
    
    i64 ans = 0;
    i64 sum = 0;
    
    vector<i64> v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &v[i]);
        sum += v[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        sum -= v[i];
        ans += v[i]*sum;
    }

    printf("%lld\n", ans);
    
    return 0;
}