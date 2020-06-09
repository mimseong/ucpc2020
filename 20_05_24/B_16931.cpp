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
    int n, m;
    scanf("%d %d", &n, &m);
    
    vector<vector<int> > v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &v[i][j]);
    
    //앞
    int front = 0;
    for (int i = 0; i < m; i++)
    {
        front += v[n-1][i];
        for (int j = n-2; j >= 0; j--)
        {
            if (v[j][i] - v[j+1][i] > 0)
            {
                front += v[j][i] - v[j+1][i];
            }
        }
    }
    
    //뒤
    int back = 0;
    for (int i = 0; i < m; i++)
    {
        back += v[0][i];
        for (int j = 1; j < n; j++)
        {
            if (v[j][i] - v[j-1][i] > 0)
                back += v[j][i] - v[j-1][i];
        }
    }
    
    //왼
    int left = 0;
    for (int i = 0; i < n; i++)
    {
        left += v[i][0];
        for (int j = 1; j < m; j++)
        {
            if (v[i][j] - v[i][j-1] > 0)
                left += v[i][j] - v[i][j-1];
        }
    }
    
    //오
    int right = 0;
    for (int i = 0; i <n; i++)
    {
        right += v[i][m-1];
        for (int j = m-2; j >= 0; j--)
        {
            if (v[i][j] - v[i][j+1] > 0)
                right += v[i][j] - v[i][j+1];
        }
    }
    
    // printf("%d %d %d %d\n", front, back, left, right);
    cout << front + back + left + right + 2*n*m;
    
    return 0;
}