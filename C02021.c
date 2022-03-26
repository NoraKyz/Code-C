//#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define FOR(i,a,b,k) for (int i=a;i<=b;i+=k)
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

int nt[1000001] = {0};
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

ll n;

int main()
{
    	//fast_cin
	//freopen("TEST.INP", "r", stdin);
	//freopen("TEST.OUT", "w", stdout);
	
	scanf("%lld", &n);
	ll c = n ;
	FOR(i,1,n,1) 
	{		
		int d = i;
		printf("%d ", d);
		FORD(j,n-1,c,1) 
		{
			d += j;
			printf("%d ", d);
		}
		c--;
		printf("\n");
	}
	
    return 0;
}





