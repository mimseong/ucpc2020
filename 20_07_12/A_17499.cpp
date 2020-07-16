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
    int n, q;
    scanf("%d %d", &n, &q);
    
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    i64 offset = 0;
    for (int i = 0; i < q; i++)
    {
        int t, a, b;
        scanf("%d", &t);

        if (t == 2)
        {
            scanf("%d", &a);
            a %= 5;
            offset = (offset + a) % n;
        }
        else if (t == 3)
        {
            scanf("%d", &a);
            a %= 5;
            offset = (offset + (n-a)) % n;
        }
        else
        {
            scanf("%d %d", &a, &b);
            v[(n+offset+a)%n] += b;
        }
        
        // printf("off : %d\n", offset);
        // for (int i = 0; i < n; i++)
        //     printf("%d ", v[(n-offset+i)%n]);
        // printf("\n");
    }
    // cout << offset << endl;
    for (int i = 0; i < n; i++)
        printf("%d ", v[(n-offset+i)%n]);

    return 0;
}