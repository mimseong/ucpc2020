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
    string s;
    cin >> s;
    
    i64 ans = 1;
    bool is_d = false, is_c = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'c' && !is_c)
        {
            is_c = true;
            is_d = false;
            ans = (ans * 26) % mod;
        }
        else if (s[i] == 'c' && is_c)
        {
            ans = (ans * 25) % mod;
        }
        if (s[i] == 'd' && !is_d)
        {
            is_c = false;
            is_d = true;
            ans = (ans * 10) % mod;
        }
        else if (s[i] == 'd' && is_d)
        {
            ans = (ans * 9) % mod;
        }
    }
    cout << ans;
    
    return 0;
}