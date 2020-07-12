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

bool sortbyfirst(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return (a.yy > b.yy); 
}

int main() {
    int n;
    scanf("%d", &n);
    
    vector<ii> v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &v[i].xx, &v[i].yy);
    }
        
    sort(v.begin(), v.end(), sortbyfirst);
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d %d\n", v[i].xx, v[i].yy);
    // }
    
    int start = v[0].yy - v[0].xx;
    for (int i = 1; i < n; i++)
    {
        if (v[i].yy >= start)
        {
            start -= v[i].xx;
        }
        else
        {
            start = v[i].yy;
            start -= v[i].xx;
        }
        //cout << start << endl;
    }
    
    if (start < 0)
        printf("-1");
    else
        printf("%d", start);
    
    return 0;
}