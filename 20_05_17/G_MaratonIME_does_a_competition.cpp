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
using ii64 = pair<i64, i64>;
 
int main() {
    int n;
    scanf("%d", &n);
    
    vector<int> v(4);
    for (int i = 0; i < n; i++)
    {
        int input;
        scanf("%d", &input);
        v[i%4] += input;
    }
    
    int max_idx = 0;
    for (int i = 0; i < 4; i++)
    {
        if (v[i] > v[max_idx])
            max_idx = i;
    }
    printf("%c", max_idx + 'A');
    
    return 0;
}