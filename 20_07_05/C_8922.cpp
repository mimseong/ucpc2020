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

void solve()
{
	int n;
	scanf("%d", &n);

	vector<int> raw(n);
	vector<int> du(n);
	vector<int> zero(n, 0);


	for (int i = 0; i < n; i++)
	{
		scanf("%d", &raw[i]);
		du[i] = raw[i];
	}

	for (int i = 0; i < 1000; i++)
	{
	    int first = du[0];
		for (int i = 0; i < n-1; i++)
		{
			du[i] = abs(du[i] - du[i+1]);
		}
		du[n-1] = abs(du[n-1] - first);

		if (du == zero)
		{
			printf("ZERO\n");
			return ;
		}
	}

	printf("LOOP\n");
	return ;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    	solve();
    
    return 0;
}