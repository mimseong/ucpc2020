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

bool is_zero(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
            return false;
    }
    return true;
}

bool sortl(const string &a, const string &b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    else
        return a < b;
}

int main() {
    int n;
    scanf("%d", &n);
    
    vector<string> v;
    for (int k = 0; k < n; k++)
    {
        string s;
        cin >> s;
        
        string tmp = "";
        bool now_num = false;
        for (int i = 0; i < s.size(); i++)
        {
            if ('0' <= s[i] && s[i] <= '9')
            {
                tmp += s[i];
                now_num = true;
            }
            else
            {
                if (now_num)
                {
                    if (is_zero(tmp))
                    {
                        v.push_back("0");
                    }
                    else if (tmp[0] == '0' && tmp.size() != 1)
                    {
                        string tmp2 = "";
                        
                        bool start_zero = false;
                        for (int j = 0; j < tmp.size(); j++)
                        {
                            if (tmp[j] != '0')
                            {
                                tmp2 += tmp[j];
                                start_zero = true;
                            }
                            else if (start_zero == true)
                                tmp2 += tmp[j];
                        }
                        v.push_back(tmp2);
                    }
                    else
                        v.push_back(tmp);
                    now_num = false;
                    tmp = "";
                }
            }
        }
        if (now_num)
        {
            if (is_zero(tmp))
            {
                v.push_back("0");
            }
            else if (tmp[0] == '0' && tmp.size() != 1)
            {
                string tmp2 = "";
                
                bool start_zero = false;
                for (int j = 0; j < tmp.size(); j++)
                {
                    if (tmp[j] != '0')
                    {
                        tmp2 += tmp[j];
                        start_zero = true;
                    }
                    else if (start_zero == true)
                        tmp2 += tmp[j];
                }
                v.push_back(tmp2);
            }
            else
                v.push_back(tmp);
        }
    }
    
    sort(v.begin(), v.end(), sortl);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
    
    return 0;
}