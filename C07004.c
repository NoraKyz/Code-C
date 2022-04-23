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

struct ps
{
    ll ts,ms;
};

ll t;
struct ps a,b;

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}

struct ps rutgon(struct ps a)
{
    ll x = gcd(a.ms,a.ts);
    a.ms/=x;
    a.ts/=x;
    return a;
}

void quydong()
{
    ll msc = a.ms*b.ms/gcd(a.ms,b.ms);
    a.ts *= msc/a.ms;
    b.ts *= msc/b.ms;
    a.ms = msc;
    b.ms = msc;
}

struct ps tong(struct ps a, struct ps b)
{
    struct ps res;
    res.ms = a.ms;
    res.ts = a.ts + b.ts;
    return rutgon(res);
}

struct ps thuong(struct ps a, struct ps b)
{
    struct  ps res;
    res.ts = a.ts;
    res.ms = b.ts;
    return rutgon(res);
}

int main()
{
    scanf("%lld", &t);
    FOR(i,1,t,1) 
    {
        struct ps res;
        scanf("%lld%lld%lld%lld", &a.ts,&a.ms,&b.ts,&b.ms);
        printf("Case #%lld:\n", i);
        a = rutgon(a);
        b = rutgon(b);
        quydong(a,b);
        printf("%lld/%lld %lld/%lld\n", a.ts,a.ms,b.ts,b.ms);
        res = tong(a,b);
        printf("%lld/%lld\n", res.ts, res.ms);
        res = thuong(a,b);
        printf("%lld/%lld\n", res.ts, res.ms);
    }
    	
	return 0;
}







