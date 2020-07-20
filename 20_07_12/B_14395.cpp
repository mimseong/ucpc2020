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
	i64 s, t;
	scanf("%lld %lld", &s, &t);
	
	if (s == t)
	{
	    printf("0\n");
	    return 0;
	}
	
	map<i64, pair<i64, char>> visited;
	visited[s] = pair<i64, char>(s, '.');
	
	queue<i64> q;
	q.push(s);
	
	while (!q.empty())
	{
	    auto now = q.front();
	    q.pop();
	    
	    if (now * now <= t && visited.find(now * now) == visited.end())
	    {
	        visited[now * now] = pair<i64, char>(now, '*');
	        q.push(now*now);
	    }
	    
	    if (now + now <= t && visited.find(now + now) == visited.end())
	    {
	        visited[now + now] = pair<i64, char>(now, '+');
	        q.push(now+now);
	    }
	    
	    if (now / now <= t && visited.find(now / now) == visited.end())
	    {
	        visited[now / now] = pair<i64, char>(now, '/');
	        q.push(now/now);
	    }
	}
	
	if (visited.find(t) == visited.end())
	{
	    printf("-1");
	    return 0;
	}
	
	i64 last = t;
	string ans;
	
	while (last != s)
	{
	    ans.push_back(visited[last].yy);
	    last = visited[last].xx;
	}
	
	reverse(all(ans));
	
	cout << ans << "\n";

	return 0;
}