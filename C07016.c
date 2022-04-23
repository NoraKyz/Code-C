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

struct vp
{
    ll code;
    double profit;
    char name[100], group[100];
};

struct vp a[1005];
ll t;

int main()
{
    scanf("%lld\n", &t);
    FOR(i,1,t,1)
    {
        double x,y,z;
        a[i].code = i;
        gets(a[i].name);
        gets(a[i].group);
        scanf("%lf%lf%lf\n", &x,&y,&z);
        a[i].profit = x+y+z;
    }

    FOR(i,1,t,1)
    {
        FOR(j,1,t-1,1) if(a[j].profit < a[j+1].profit)
        {
            struct vp tmp = a[j+1];
            a[j+1] = a[j];
            a[j] = tmp;
        }
    }

    FOR(i,1,t,1) 
    {
        printf("%lld %s %s %.1lf\n", a[i].code, a[i].name, a[i].group, a[i].profit);
    }
    	
	return 0;
}







