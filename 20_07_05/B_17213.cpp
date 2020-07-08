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

int com(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    else
        return com(n-1, r-1) + com(n-1, r);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    m -= n;
    printf("%d\n", com(n-1+m, m));
    
    return 0;
}