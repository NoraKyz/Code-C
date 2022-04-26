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

ll t, m, n;
ll a[1001][1001];

int main()
{
    scanf("%lld", &t);
    FOR(i,1,t,1) 
    {
        printf("Test %lld:\n", i);

        scanf("%lld%lld", &n,&m);
        FOR(i,1,n,1) 
        {
            FOR(j,1,m,1) scanf("%lld",&a[i][j]);
        }

        FOR(i,1,n,1)
        {
            FOR(j,1,m,1) 
            {
                FOR(k,i,n,1)
                {
                    FOR(l,j,m,1) if(a[i][j] > a[k][l]) 
                    {
                        ll tmp = a[k][l];
                        a[k][l] = a[i][j];
                        a[i][j] = tmp;
                    }
                }              
            }
        }

        FOR(i,1,n,1) 
        {
            FOR(j,1,m,1) printf("%lld ", a[i][j]);
            printf("\n");
        }
    }

	return 0;
}







