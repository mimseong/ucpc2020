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
#define mod ((i64)1e10)
 
using namespace std;
using i64 = long long;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main() 
{
    map<i64, int> m;
    
    i64 n1 = 0;
    i64 n2 = 1;
    m[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        i64 num = (n1 + n2)%mod;
        n1 = n2;
        n2 = num;
        m[num] = i;
    }
    
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        
        i64 search;
        if (s.size() > 10)
            search = stoll(s.substr(s.size()-10, 10));
        else
            search = stoll(s);
        
        cout << m[search] << "\n";
    }
    
    return 0;
}