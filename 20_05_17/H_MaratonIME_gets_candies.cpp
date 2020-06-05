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
 
int ans;
 
string query(int x)
{
	cout << "Q " << x << endl;
#ifdef ONLINE_JUDGE
	string s;
	cin >> s;
 
	return s;
#else
	if (ans > x)
		return ">";
	else if (ans == x)
		return "=";
	else
		return "<";
#endif
}
 
int main()
{
#ifndef ONLINE_JUDGE
	scanf("%d", &ans);
#endif
 
	int lo = 1, hi = 1e9;
 
	while (lo <= hi)
	{
		int mid = (lo + hi) / 2;
		
		string s = query(mid);
 
		if (s == "=")
			return 0;
 
		if (s == ">")
			lo = mid + 1;
		else
			hi = mid - 1;
	}
 
	return 0;
}