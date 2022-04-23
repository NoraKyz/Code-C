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

char s[10000][100], kt = 'a', tmp[1000] = "00000";

bool checkpra(char s[])
{
    ll n = strlen(s)-1;
    FOR(i,0,n,1) 
    {
        if(s[i] != s[n-i]) return 0;
    }
    return 1;
}

int main()
{
    	//fast_cin
	//freopen("TEST.INP", "r", stdin);
	//freopen("TEST.OUT", "w", stdout);	
    ll c = 0, res = 0;
	while(kt != EOF)
    {
        scanf("%s", s[++c]);
        kt = getchar();
    }

    FOR(i,1,c,1) 
    {
        if(checkpra(s[i])) 
        {
            ll n = strlen(s[i]);
            if(res < n) res = n;
        }
        else strcpy(s[i],tmp);
    }

    FOR(i,1,c,1)
    {
        ll n = strlen(s[i]);
        if(strcmp(s[i],tmp) != 0 && res == n) 
        {
            ll cnt = 1;
            FOR(j,i+1,c,1) 
            {
                if(strcmp(s[i],s[j]) == 0) 
                {
                    cnt++;
                    strcpy(s[j],tmp);
                }
            }

            printf("%s %lld\n", s[i],cnt);
        }
    }

	
	return 0;
}







