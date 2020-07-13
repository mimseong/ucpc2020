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
#define all(x) (x).begin(), (x).end()
 
using namespace std;
using i64 = long long;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;


int main() {
    int n;
    scanf("%d", &n);
    
    vector<ii> event;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        event.emplace_back(x, 1);
        event.emplace_back(y, -1);
    }
        
    sort(all(event));

    int count = 0;
    int max = 0;
    for(int i = 0; i < event.size(); i++)
    {
        count += event[i].yy;
        if (max < count)
        {
            max = count;
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}