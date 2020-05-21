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
    i64 n;
    scanf("%lld", &n);
    
    i64 res = n * (n + 1) / 2 - (n - 1);
    
    printf("%lld", res);
    
    return 0;
}