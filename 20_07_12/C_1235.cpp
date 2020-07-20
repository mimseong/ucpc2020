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
    int n;
    scanf("%d", &n);

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int s_size = v[0].size();
    for (int k = 1; k <= s_size; k++)
    {
        vector<string> s(n);
        for (int i = 0; i < n; i++)
            s[i] = v[i].substr(s_size-k);

        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        if (s.size() == n)
        {
            printf("%d\n", k);
            return 0;
        }
    }
    printf("%d\n", n);
    return 0;
}