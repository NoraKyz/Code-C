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
int t, n;
int a[1001];

int gcd(int a, int b)
{
	if(b == 0) return a;
	return gcd(b,a%b);
}


int main()
{
    	//fast_cin
	//freopen("TEST.INP", "r", stdin);
	//freopen("TEST.OUT", "w", stdout);
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		FOR(i,1,n,1) scanf("%d", &a[i]);
		
		printf("%d ", a[1]);
		FOR(i,1,n-1,1) 
		{
			int x = gcd(a[i],a[i+1]);
			printf("%d ", a[i]*a[i+1]/x);
		}
		printf("%d\n", a[n]);
	}
					
    return 0;
}




