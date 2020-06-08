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
#define xx first
#define yy second
 
int main() {
    int n;
    scanf("%d", &n);
    
    vector <int> v(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    
    int min_odd = 99999;
    i64 sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]%2 == 1 && v[i] < min_odd)
        {
            min_odd = v[i];
        }
        sum += v[i];
    }
    
    if (sum%2 == 0)
        cout << sum;
    else
        cout << sum - min_odd;
        
    return 0;
}