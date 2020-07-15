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
 
int main() {
    int n;
    scanf("%d", &n);
    
    if (n == 0)
    {
        printf("NO");
        return 0;
    }
    
    i64 num = 1;
    
    vector<i64> t(20);
    for (int i = 0; i <= 19; i++)
    {
        t[i] = num;
        num *= 3;
    }
    
    vector<i64> ans;
    for (int i = 0; i < (1 << 20); ++i) 
    { 
        i64 sum = 0;
        for (int j = 0; j < 20; ++j)
        { 
            if (i & (1 << j)) 
                sum += t[j];
        }
        ans.push_back(sum);
    }
    
    if (find(ans.begin(), ans.end(), n) != ans.end())
        printf("YES");
    else
        printf("NO");
    return 0;
}