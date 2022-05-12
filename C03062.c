//#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
ll t, n, m;

ll gcd(ll a, ll b)
{
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main()
{
    	//fast_cin
	//freopen("TEST.INP", "r", stdin);
	//freopen("TEST.OUT", "w", stdout);
	scanf("%lld", &t);
	
	while(t--) 
	{		
		scanf("%lld%lld", &n, &m);
		
		ll res = n;
		FOR(i,n+1,m,1) 
		{
			res = res * i / gcd(res, i);
		}
		
		printf("%lld\n", res);
	}
	
	
    return 0;
}




