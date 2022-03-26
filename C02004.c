//#include<bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define FOR(i, a, b, k) for (ll i = a; i <= b; i += k)
#define FORD(i, a, b, k) for (ll i = a; i >= b; i -= k)
#define pb(i) push_back(i)
#define ll long long int
#define all(a) (a).begin(), (a).end()
#define fi first
#define se second
//#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// using namespace std;
const ll MOD = 1e9 + 7;

// gio moi vao code chinh :>
void ScanfA(ll a[], ll n)
{
	FOR(i, 1, n, 1)
	{
		scanf("%lld", &a[i]);
	}
}

bool nt[1000001] = {0};
void Sieve(int n)
{
	nt[1] = 1;
	FOR(i, 4, n, 2)
	nt[i] = 1;

	FOR(i, 3, n, 2)
	{
		if (nt[i] == 0)
		{
			FOR(j, i * 3, n, i * 2)
			nt[j] = 1;
		}
	}
}

ll SumNumber(ll n)
{
	ll s = 0;
	while (n > 0)
	{
		s += n % 10;
		n /= 10;
	}

	return s;
}

ll Factorial(ll n)
{
	ll res = 1;
	FOR(i, 1, n, 1)
	res *= i;
	return res;
}

ll Pow(ll a, ll n)
{
	ll res = 1;
	FOR(i, 1, n, 1)
	res *= a;
	return res;
}

ll Gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return Gcd(b, a % b);
}

ll Max(ll a, ll b)
{
	if (a > b)
		return a;
	else
		return b;
}

ll Min(ll a, ll b)
{
	if (a > b)
		return b;
	else
		return a;
}

void QuickSort(ll a[], ll l, ll r)
{
	ll i = l, j = r;
	ll p = a[(l + r) / 2];

	while (i <= j)
	{
		while (a[i] < p)
			++i;
		while (a[j] > p)
			--j;

		if (i <= j)
		{
			ll tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
			++i;
			--j;
		}
	}

	if (l < j)
		QuickSort(a, l, j);
	if (i < r)
		QuickSort(a, i, r);
}

/*  Le Quy Long
	B21DCCN076
	26
	21
	D21CQCN04-B  */

ll n;

int main()
{
    	//fast_cin
	//freopen("TEST.INP", "r", stdin);
	//freopen("TEST.OUT", "w", stdout);
	scanf("%lld", &n);
	
	FOR(i,1,n-1,1) printf("~");
	FOR(i,1,n,1) printf("*");
	printf("\n");
	
	int c = 2;
	FOR(i,1,n-2,1)
	{
		FOR(i,1,n-c,1) printf("~");
		FOR(j,1,n,1) if(j == 1 || j == n) printf("*"); else printf(".");
		printf("\n");
		c++;
	}
	
	FOR(i,1,n,1) printf("*");
	
    return 0;
}
