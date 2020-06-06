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
	int t;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++)
	{
	    int a, b;
	    scanf("%d %d", &a, &b);
 
	    if (abs(a-b) <= 1)
	    {
	        printf("Ok\n");
	        continue;
	    }
	    
	    printf("%d %d\n", (a+b)/2, (a+b+1)/2);
	}
 
	return 0;
}