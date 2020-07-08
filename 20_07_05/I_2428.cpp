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
    int n;
    scanf("%d", &n);
    
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
        
    sort(v.begin(), v.end(), desc);
    
    int r = 1;
    i64 ans = 0;

    for (int l = 0; l < n; l++)
    {
        r = max(l+1, r);
        while (r < n && v[l]*0.9 <= v[r])
            r++;
        
        ans += r - l - 1;
    }
    
    cout << ans;
    
    return 0;
}