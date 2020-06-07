#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <string.h>
#include <math.h>
#include <random>
#include <functional>
#include <assert.h>
#include <math.h>
#define all(x) (x).begin(), (x).end()
#define xx first
#define yy second
 
using namespace std;
 
template<typename T, typename Pr = less<T>>
using pq = priority_queue<T, vector<T>, Pr>;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;
 
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	
	vector<int> col(m);
	vector<string> lane(m);
	for (int i = 0; i < m; i++)
	    cin >> col[i] >> lane[i];
	    
    for (int i = 0; i < m; i++)
    {
        if (lane[i] == "M")
        {
            printf("No");
            return 0;
        }
        
        if (i == 0)
            continue;
        
        if ((lane[i] != lane[i-1]) && col[i] - col[i-1] <= 3)
        {
            printf("No");
            return 0;
        }
    }
 
    printf("Yes");
	return 0;
}