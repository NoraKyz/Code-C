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
void ScanfA(ll a[], ll n) 
{
	FOR(i,1,n,1) 
	{
		scanf("%lld", &a[i]);	
	}
}

void SwapI(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

bool nt[1000001] = {0};
void Sieve(int n)
{
	nt[1] = 1;
	FOR(i,4,n,2) nt[i] = 1;

	FOR(i,3,n,2) 
	{
		if(nt[i] == 0)
		{
			FOR(j,i*3,n,i*2) nt[j] = 1;
		}
	}
}

/*void BS(int a[], int n)
{
	FOR(i,1,n,1) 
	{
		FOR(j,1,n-1,1) if(a[j] > a[j+1]) 
		{
			int tmp = a[j+1];
			a[j+1] = a[j];
			a[j] = tmp;
		}
	}
}*/

ll SumNumber(ll n)
{
	ll s = 0;
	while (n > 0)
	{
		s += n%10;
		n /= 10;
	}

	return s;
}

ll Factorial(ll n) 
{
	ll res = 1;
	FOR(i,1,n,1) res *= i;
	return res;
}

ll Pow(ll a, ll n)
{
	ll res = 1;
	FOR(i,1,n,1) res*=a;
	return res;
}

ll Gcd(ll a, ll b)
{
	if(b == 0) return a;
	return Gcd(b, a%b);
}

ll Max(ll a, ll b) 
{
	if(a > b) return a;
}

ll Min(ll a, ll b)
{
	if(a > b) return b;
}

ll t, m;
char s[20][20], tmp[50];

int main()
{
    	//fast_cin
	//freopen("TEST.INP", "r", stdin);
	//freopen("TEST.OUT", "w", stdout);
	scanf("%lld", &t);
    while (t--)
    {
        scanf("%d", &m);
        FOR(i,1,m,1) scanf("%s", &s[i]); 

        FOR(i,1,m,1) 
	    {
		    FOR(j,1,m-1,1) 
            {
                char s1[50]="", s2[50]="";

                strcat(s1,s[j]);
                strcat(s1,s[j+1]);
                strcat(s2,s[j+1]);
                strcat(s2,s[j]);

                if(strcmp(s1, s2) > 0) 
		        {
			        strcpy(tmp, s[j+1]);
                    strcpy(s[j+1], s[j]);
                    strcpy(s[j], tmp);
		        }
            }
	    }

        FOR(i,1,m,1) printf("%s", s[i]); 
        printf("\n");
    }
    
    return 0;
}







