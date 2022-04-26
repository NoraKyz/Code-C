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

ll n;
int s1[205], s2[205], s12[505], s[505];
char x;


bool CMP(int a[], int b[])
{
    FOR(i,1,2*n,1) if(a[i] != b[i]) return 0;
    return 1;
}

void gop()
{
    FOR(i,1,n,1) s12[i*2-1] = s2[i];  
    FOR(i,1,n,1) s12[i*2] = s1[i];
}

void tach()
{
    FOR(i,1,n,1) s1[i] = s12[i];
    FOR(i,n+1,2*n,1) s2[i-n] = s12[i];
}

ll loading()
{
    ll i = 1;
    FOR(i,1,2*n,1)
    {    
        gop(s1,s2); 
        //FOR(i,1,2*n,1) printf("%c", (char)s12[i]);
        //printf("\n");    
        if(CMP(s12,s)) return i;
        tach(s12);       
    }  
    return -1;
}

int main()
{
    n = 5;
    while(n != 0)
    {
        scanf("%lld\n", &n);
        if(n == 0) break;
        
        FOR(i,1,n+1,1) 
        {
            scanf("%c", &x);
            s1[i] = (int) x;
        }

        FOR(i,1,n+1,1) 
        {
            scanf("%c", &x);
            s2[i] = (int) x;
        }

        FOR(i,1,2*n+1,1) 
        {
            scanf("%c", &x);
            s[i] = (int) x;
        }
        
        printf("%lld\n", loading()); 

    }
	return 0;
}







