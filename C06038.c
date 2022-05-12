//#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define FOR(i,a,b,k) for (ll i=a;i<=b;i+=k)
#define FORD(i,a,b,k) for (ll i=a;i>=b;i-=k)
#define pb(i) push_back(i)
#define ll long long int
#define all(a) (a).begin(), (a).end()
#define fi first
#define se second
//#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//using namespace std;
const ll MOD=1e9+7;

// gio moi vao code chinh :>
void ScanfA(ll a[], ll n) 
{
	FOR(i,1,n,1) 
	{
		scanf("%lld", &a[i]);	
	}
}

/*void Swap(ll a, ll b)
{
	ll tmp = b;
	b = a;
	a = tmp;
}*/

bool nt[1000001] = {0};
void Sieve(int n)
{
	nt[1] = 1;
	FOR(i,4,n,2) nt[i] = 1;

	FOR(i,3,n,2) 
	{
		if(nt[i] == 0)
		{
			FOR(j,i*3,n,i*2) nt[j] = 1;
		}
	}
}

/*void BS(int a[], int n)
{
	FOR(i,1,n,1) 
	{
		FOR(j,1,n-1,1) if(a[j] > a[j+1]) 
		{
			int tmp = a[j+1];
			a[j+1] = a[j];
			a[j] = tmp;
		}
	}
}*/

ll SumNumber(ll n)
{
	ll s = 0;
	while (n > 0)
	{
		s += n%10;
		n /= 10;
	}

	return s;
}

ll Factorial(ll n) 
{
	ll res = 1;
	FOR(i,1,n,1) res *= i;
	return res;
}

ll Pow(ll a, ll n)
{
	ll res = 1;
	FOR(i,1,n,1) res*=a;
	return res;
}

ll Gcd(ll a, ll b)
{
	if(b == 0) return a;
	return Gcd(b, a%b);
}

ll Max(ll a, ll b) 
{
	if(a > b) return a;
}

ll Min(ll a, ll b)
{
	if(a > b) return b;
}

ll t;
char a[100], res[100];

char Sum(char a[], char b[])
{
	char c[100] = ""; 
	res[100] = "";
	int lenA = strlen(a), lenB = strlen(b), tmp = 0;

	if(lenA > lenB)
	{
		FOR(i,1,lenA-lenB,1) strcat(c, "0");
		strcat(c, b);
	}
	else 
	{
		FOR(i,1,lenB-lenA,1) strcat(c, "0");
		strcat(c, a);
		a = b;
	}

	lenA = strlen(a);
	FORD(i,lenA-1,0,1) 
	{
		int x = a[i] + c[i] - 2 * '0' + tmp;
		res[i] = x%10 + '0';
		tmp = x/10;
	}

	if(tmp >= 1) 
	{
		tmp += '0';
		char s[100] = "";
		s[0] = tmp;
		strcat(s, res);
		strcpy(res, s);
	}

	return res[0];
}

bool kt(char a[], int c[])
{
	int lenA = strlen(a);
	FOR(i,1,lenA,1) 
	{
		int x = Sum(res, a) - '0';
		c[x]--;
		if(c[x] < 0) return 0;
		FOR(i,0,x-1,1) c[i] = 0;
	}

	return 1;
}

int main()
{
    	//fast_cin
	//freopen("TEST.INP", "r", stdin);
	//freopen("TEST.OUT", "w", stdout);
	scanf("%lld\n", &t);

	while (t--)
	{
		int c[10] = {0};
		strcpy(res, "");
		scanf("%s", &a);		
		
		ll len = strlen(a);
		for(int i = 0; i < len; i++) c[a[i] - '0'] ++;
		
		if(kt(a, c)) printf("YES\n");
		else printf("NO\n");
	}

    return 0;
}







