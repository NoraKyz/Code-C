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

ll f[1000] = {0}, t;
char s[1000];

ll kt(char x, char y)
{
    if(x == 'I') 
    {
        if(y == 'V') return 4;
        if(y == 'X') return 9;
    }

    if(x == 'X')
    {
        if(y == 'L') return 40;
        if(y == 'C') return 90;
    }

    if(x == 'C')
    {
        if(y == 'D') return 400;
        if(y == 'M') return 900;
    }

    return 0;
}

ll doc(char s[])
{
    ll res = 0, n = strlen(s)-1;

    FOR(i,0,n,1)
    {
        if(kt(s[i],s[i+1]) == 0) res+= f[s[i]];
        else 
        {
            res += kt(s[i],s[i+1]);
            i++;
        }
    }

    return res;
}

int main()
{
    f['I'] = 1; f['V'] = 5; f['X'] = 10; f['L'] = 50, f['C'] = 100;
    f['D'] = 500; f['M'] = 1000;

    scanf("%lld", &t);
    while(t--)
    {
        scanf("%s", &s);
        printf("%lld\n", doc(s));
    }

	return 0;
}







