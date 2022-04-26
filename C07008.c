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

ll t, f[10005] = {0};
char s[10001];

void try(char s[])
{
    ll i = 0, n = strlen(s);

    ll res = 0, indx = 0;
    while(s[i] != '*')
    {
        res = res*10 + s[i] - '0';
        i++;
    }

    i+=3;
    while(i < n)
    {
        indx = indx*10 + s[i] - '0';
        i++;
    }

    f[indx] += res;
}

int main()
{
    scanf("%lld\n", &t);
    while(t--)
    {
        gets(s);
        char *p;   
        p = strtok(s," + ");
        while (p != NULL)
        {
            try(p);
            p = strtok (NULL, " + ");
        }

        gets(s);
        p = strtok(s," + ");     
        while (p != NULL)
        {
            try(p);
            p = strtok (NULL, " + ");
        }

        bool kt = 0;
        FORD(i,10000,0,1) if(f[i] != 0)
        {
            if(kt) printf(" + ");
            else kt = 1;
            printf("%lld*x^%lld", f[i], i);
            f[i] = 0;           
        }
        printf("\n");
    }

	return 0;
}







