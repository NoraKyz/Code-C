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

// giờ mới vào main code :>

/*  Le Quy Long
    B21DCCN076
    26
    21
    D21CQCN04-B  */

char s[100];
ll f[100] = {0};

ll Max(ll x, ll y)
{
    if(x > y) return x;
    return y;
}

int main()
{
    scanf("%s", &s);
    ll n= strlen(s)-1;
    FOR(i,0,n,1) f[i] = 1;

    FOR(i,0,n,1)
    {
        FORD(j,i-1,0,1)
        {
            if(s[i] > s[j]) f[i] = Max(f[i], f[j]+1);
        }
    }
 
    ll res = 0;
    FOR(i,0,n,1) res = Max(res, f[i]);

    printf("%lld", 26-res);
    
	return 0;
}







