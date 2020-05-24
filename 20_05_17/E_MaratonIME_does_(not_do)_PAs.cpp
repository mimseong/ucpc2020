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
using ii64 = pair<i64, i64>;
 
int main() {
    i64 n, s;
    scanf("%lld %lld", &n, &s);
    
    vector<ii64> v(n);
    i64 end_sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &v[i].first, &v[i].second);
        end_sum += v[i].second;
    }
    
    sort(v.begin(), v.end());
    
    i64 last_sum = 0;
    i64 sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i].first;
        last_sum += sum;
    }
    
    printf("%lld", last_sum + s * n - end_sum);
    
    return 0;
}