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

    vector<int> s(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    
    vector<int> count(2000005, 0);
    for (int i = 0; i < (1 << n); ++i) 
    { 
        int sum = 0;
        for (int j = 0; j < n; ++j)
        { 
            if (i & (1 << j)) 
                sum += s[j];
        }
        count[sum] = 1;
    }
    
    for (int i = 1; i <= 2000000; i++)
    {
        if (count[i] != 1)
        {
            printf("%d\n", i);
            break ;
        }
    }
    
    return 0;
}