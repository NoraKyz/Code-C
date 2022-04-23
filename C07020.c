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

// gio moi vao code chinh :>

/*  Le Quy Long
    B21DCCN076
    26
    21
    D21CQCN04-B  */

struct poke
{
    char name[1000];
    ll number;
}; 

ll Max(ll x, ll y)
{
    if(x > y) return x;
    return y;
}

ll dem(ll k, ll m)
{
    ll res = 0;
    while(m > 0)
    {
        m-=k;
        if(m>=0) 
        {
            res++;
            m+=2;
        }
    }
    return res;
}

struct poke a[100];
ll t, res = -1, sum = 0;

int main()
{
    scanf("%lld\n", &t);
    FOR(i,1,t,1) 
    {
        ll k,m;
        scanf("%s%lld%lld", &a[i].name, &k, &m);
        a[i].number = dem(k,m);
        sum += a[i].number;
        res = Max(res,a[i].number);
    }    

    printf("%lld\n", sum);
    FOR(i,1,t,1)
    {
        if(a[i].number == res) 
        {
            printf("%s", a[i].name);
            break;
        }
       
    }
    	
	return 0;
}







