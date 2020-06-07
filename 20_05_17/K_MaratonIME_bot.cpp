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
    bool is_sussu = false;
    
    string s;
	while(cin >> s)
	{
	    if (s == "Sussu")
	        is_sussu = true;
	}
	
	if (s.back() == '?')
	{
	    cout << "7";
	    return 0;
	}
	
	s.pop_back();
	if (s == "Sussu")
	        is_sussu = true;
	
	if (is_sussu)
	    cout << "AI SUSSU!";
	else
	    cout << "O cara é bom!";
	
	return 0;
}