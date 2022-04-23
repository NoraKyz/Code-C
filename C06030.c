//#include<bits/stdc++.h>
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
//#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//using namespace std;
const ll MOD=1e9+7;

// gio moi vao code chinh :>

/*  Le Quy Long
    B21DCCN076
    26
    21
    D21CQCN04-B  */

char s[1001][100], kt = 'a', tmp[100] = "00000";

ll Max(ll x, ll y)
{
    if(x > y) return x;
    return y;
}

int main()
{
    	//fast_cin
	//freopen("TEST.INP", "r", stdin);
	//freopen("TEST.OUT", "w", stdout);	
    ll n = 0, res = 0;
	while(kt != EOF)
    {
        scanf("%s", &s[++n]);
        kt = getchar();
        res = Max(res, strlen(s[n]));
    }

    FOR(i,1,n,1) 
    {
        if(strcmp(s[i], tmp) != 0 && strlen(s[i]) == res)
        {
            ll c = 1;
            FOR(j,i+1,n,1) if(strcmp(s[j], s[i]) == 0)
            {
                c++;
                strcpy(s[j], tmp);
            }

            printf("%s %lld %lld\n", s[i],res,c);
        }
    }
 	
	return 0;
}







