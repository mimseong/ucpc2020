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
    int xr, yr, xw, yw;
    scanf("%d %d %d %d", &xr, &yr, &xw, &yw);
    
    int lenr = xr*xr + yr*yr;
    int lenw = xw*xw + yw*yw;
    
    if (lenr < lenw)
        printf("Russo");
    else if (lenr > lenw)
        printf("Wil");
    else
        printf("Empate");

    return 0;
}