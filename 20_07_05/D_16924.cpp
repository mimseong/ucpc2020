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

int x[4] = {0, -1, 0, 1};
int y[4] = {1, 0, -1, 0};

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    vector<string> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    vector<ii> ans;
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.')
                continue;

            int k = 0;
            int x_p = i;
            int y_p = j;
            
            
            vector<int> count(4, 0);
            while (k != 4)
            {
                x_p += x[k];
                y_p += y[k];
                
                if (x_p < 0 || n <= x_p || y_p < 0 || m <= y_p)
                {
                    k++;
                    x_p = i;
                    y_p = j;
                    continue ;
                }
                if (v[x_p][y_p] == '*')
                    count[k]++;
                else
                {
                    k++;
                    x_p = i;
                    y_p = j;
                }
            }

            
            
            int input = min({count[0], count[1], count[2], count[3]});
            if (input != 0)
            {
                s.push_back(input);
                ans.emplace_back(i, j);
            }
        }
    }
    
    
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int x_p = ans[i].xx;
            int y_p = ans[i].yy;
            v[x_p][y_p] = '.';
            
            for (int k = 0; k < s[i]; k++)
            {
                x_p += x[j];
                y_p += y[j];
                v[x_p][y_p] = '.';
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '*')
            {
                printf("-1\n");
                return 0;
            }
        }
    }
    
    printf("%d\n", ans.size());
    for (int i = 0; i < ans.size(); i++)
    {
        printf("%d %d %d\n", ans[i].xx + 1, ans[i].yy + 1, s[i]);
    }
    
    return 0;
}