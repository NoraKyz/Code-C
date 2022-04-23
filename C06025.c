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

ll t, lena, lenb;
char a[1050], b[1050], res[1050];

bool ss()
{
    if(lena < lenb) return 1;
    else if(lena == lenb && strcmp(a,b) < 0) return 1;
    return 0;
}

void candoi()
{
    char tmp[1050], c[1050] = "";
    lena = strlen(a);
    lenb = strlen(b);

    if(ss()) 
    {
        strcpy(tmp,b);
        strcpy(b,a);
        strcpy(a,tmp);
    }
    lena = strlen(a);
    lenb = strlen(b);

    FOR(i,1,lena-lenb,1) strcat(c,"0");
    strcat(c,b);
    strcpy(b,c);
}

void hieu()
{
    ll nho = 0;

	FORD(i,lena-1,0,1) 
	{
		if(a[i] < b[i] + nho) 
        {
            res[i] = a[i] + 10 - b[i] - nho + '0';
            nho = 1;
        }
        else 
        {
            res[i] = a[i] - b[i] - nho + '0';
            nho = 0;
        }
	}

    if(res[0] != '0') printf("%c", res[0]);
    FOR(i,1,lena-1,1) printf("%c", res[i]);
    printf("\n");	
}

int main()
{
    scanf("%lld\n", &t);
    while(t--)
    {
        scanf("%s%s", &a,&b);     
        candoi();
        hieu();
    }
    
    	
	return 0;
}







