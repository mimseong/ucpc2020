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
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        scanf("%d", &input);
        sum += input;
    }
    printf("%d", (sum+4)/5);
    
    
    return 0;
}