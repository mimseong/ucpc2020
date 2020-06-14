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
 
int main() {
    i64 h, w, n;
    scanf("%lld %lld %lld", &h, &w, &n);
    
    map <ii64, i64> m;
    for (int i = 0; i < n; i++)
    {
        i64 x, y;
        scanf("%lld %lld", &x, &y);
        
        for (int i = -2; i <= 0; i++)
        {
            for (int j = -2; j <= 0; j++)
            {
                if (1 <= x+i && 1 <= y+j && x+i <= h-2 && y+j <= w-2)
                    m[{x+i, y+j}]++;
            }
        }
    }
    
    vector<int> v(10);
    for (auto mi : m)
        v[mi.second]++;
    
    i64 sum = 0;
    for (int i = 1; i < 10; i++)
        sum += v[i];
    
    cout << (h-2)*(w-2) - sum <<endl;
    for (int i = 1; i < 10; i++)
        cout << v[i] << endl;
    
    return 0;
}