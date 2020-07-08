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
 
int main() {
    string s;
    cin >> s;
    
    int r = 1;
    for (int i = 1; i*i <= s.size(); i++)
    {
        if (s.size() % i == 0)
        {
            r = i;
        }
    }
    int r2 = s.size()/r;
    
    
    vector<vector<char> > v(r, vector<char>(r2));
    
    int count = 0;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < r; j++)
        {
            v[j][i] = s[count++];
        }
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            printf("%c", v[i][j]);
        }
    }
    
    
    return 0;
}