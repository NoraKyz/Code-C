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

ll n, res = 0;
ll a[15][15];
char s[15][15];

void swapa(ll x, ll y)
{
    FORD(i,x,1,1) 
    {
        FORD(j,y,1,1) if(a[i][j]) a[i][j] = 0;
        else a[i][j] = 1;
    }
}

int main()
{
    scanf("%lld", &n);
    FOR(i,1,n,1) 
    {
        scanf("%s\n", &s[i]);
    }

    FOR(i,1,n,1)
    {
        FOR(j,1,n,1) a[i][j] = s[i][j-1] - '0';
    }

    FORD(i,n,1,1) 
    {
        FORD(j,n,1,1)
        {
            if(a[i][j] == 1) 
            {
                swapa(i,j);
                res++;
            }
        }
    }

    printf("%lld", res);

	return 0;
}







