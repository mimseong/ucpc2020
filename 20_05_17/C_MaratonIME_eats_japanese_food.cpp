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
    int n;
    char tmp;
    scanf("%d", &n);
    
    vector<ii> pos;
    vector<int> radius;
    for (int i = 0; i < n; i++)
    {
        string type;
        int x, y, r;
        cin >> type >> x >> y >> r;
        
        if (type[0] == 'A')
        {
            bool check = true;
            
            for (int j = 0; j < pos.size(); j++)
            {
                if ((r + radius[j])*(r + radius[j]) > (x - pos[j].first)*(x - pos[j].first) + (y - pos[j].second)*(y - pos[j].second))
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                pos.emplace_back(x, y);
                radius.push_back(r);
                printf("Ok\n");
            }
            else
                printf("No\n");
        }
        else
        {
            bool check = false;
            
            for (int j = 0; j < pos.size(); j++)
            {
                if (r == radius[j] && x == pos[j].first && y == pos[j].second)
                {
                    pos.erase(pos.begin() + j);
                    radius.erase(radius.begin() + j);
                    check = true;
                    break;
                }
            }
            if (check)
            {
                printf("Ok\n");
            }
            else
                printf("No\n");
        }
    }

    return 0;
}