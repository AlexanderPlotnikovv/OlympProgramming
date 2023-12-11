#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
#include <set>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <complex>
#include <deque>
#include <list>
#include <functional>
#include <random>
#include <unordered_map>
#include <unordered_set>
#include <forward_list>
#include <array>
#include <typeinfo>
#include <numeric>
#include <memory>
#include <fstream>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<ll> vb;
typedef std::string str;
typedef vector<vi> vii;
typedef vector<str> vs;
typedef stack<ll> s;
typedef queue<ll> q;
typedef deque<ll> d;
typedef vector<pair<ll, ll>> vpii;
typedef vector<char> vchar;
typedef vector<vchar> vcchar;
typedef pair<ll, ll> pii;
typedef unordered_set<ll> uset;
typedef unordered_map<ll,ll> umapint;
typedef vector<vs> vss;
typedef vector<vb> vbb;


void printvec(vi vec)
{
	for (auto elem : vec)
	{
		cout << elem << " ";
	}
	cout << "\n";
}

void printvecb(vb vec)
{
	for (auto elem : vec)
	{
		cout << elem << " ";
	}
	cout << "\n";
}

ll maxv(vi vec)
{
	ll maxx = -435345664;
	for (auto elem : vec)
	{
		if (elem > maxx)
		{
			maxx = elem;
		}
	}
	return maxx;
}

void inputvec(vi& vec)
{
	for (auto& elem : vec)
	{
		cin >> elem;
	}
}

ll sumvec(vi vec)
{
	int count = 0;
	for (auto elem : vec)
	{
		count += elem;
	}
	return count;
}

bool have(int a, int n = 8)
{
	return (a >= 0 && a < n);
}

bool is_sqr(ll a)
{
	return static_cast<int>(sqrt(a)) * static_cast<int>(sqrt(a)) == a;
}

ll ent(str s1, str s2)
{
	if (s1 > s2)
	{
		return 0;
	}
	else
	{
		ll count = 0;
		for (int i = 0; i <= s2.size() - s1.size(); ++i)
		{
			//cout << i << " ";
			if (s1[0] == s2[i])
			{
				if (s1 == s2.substr(i, s1.size()))
				{
					++count;
				}
			}
		}
		return count;
	}
	return -1;
}

bool all_pos(vi vec)
{
	for (auto elem : vec)
	{
		if (elem <= 0)
		{
			return false;
		}
	}
	return true;
}

bool all_neg(vi vec)
{
	for (auto elem : vec)
	{
		if (elem >= 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	
	/*ll summ = sumvec(vec1) + sumvec(vec2);
	if (n == m)
	{
		cout << 0;
	}
	else if (n > m)
	{
		if (summ == 0)
		{
			cout << 0;
		}
		else if (summ < 0)
		{
			ll step = n - m;
			ll sc = abs(summ) / step + 1;
			if (summ + step * sc >= abs(summ + step * (sc - 1)))
			{
				cout << sc - 1;
			}
			else
			{
				cout << sc;
			}
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		if (summ == 0)
		{
			cout << 0;
		}
		else if (summ > 0)
		{
			ll step = m - n;
			ll sc = abs(summ) / step + 1;
			if (abs(summ - step * sc) >= abs(summ + step * (sc - 1)))
			{
				cout << sc - 1;
			}
			else
			{
				cout << sc;
			}
		}
		else
		{
			cout << 0;
		}
	}*/
	return 0;
}

//надо решить задачу про последовательности различных чисел в виде слагаемых некоторого числа