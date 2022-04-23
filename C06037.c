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

ll res = 0;
char s[100];
bool kt[1000] = {0}, f[1000] = {0};

void reset()
{
    FOR(i,'A','Z',1) kt[i] = 0;
}

int main()
{
    scanf("%s", &s);
    ll n = strlen(s)-1;

    FOR(i,0,n,1)
    {
        if(f[s[i]] == 0)
        {
            f[s[i]] = 1;
            FOR(j,i+1,n,1)
            {          
                if(s[i] == s[j]) break;
                if(kt[s[j]] == 0) 
                {
                    res++;
                    kt[s[j]] = 1;
                }
                else res--;
            }

            reset();
        }
    }
    
    printf("%lld", res/2);
	return 0;
}







