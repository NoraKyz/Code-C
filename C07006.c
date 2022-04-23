#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define FOR(i,a,b,k) for (ll i=a;i<=b;i+=k)
#define FORD(i,a,b,k) for (ll i=a;i>=b;i-=k)
#define ll long long int

ll t;
double a,b,c,d,e,f;

int main()
{
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf%lf", &a,&b,&c,&d,&e,&f);
        double AB, BC, AC, x;
        AB = sqrt( 1.0*(a-c)*(a-c) + 1.0*(b-d)*(b-d) );
        BC = sqrt( 1.0*(a-e)*(a-e) + 1.0*(b-f)*(b-f) );
        AC = sqrt( 1.0*(e-c)*(e-c) + 1.0*(f-d)*(f-d) );
        
        double p = 0.5 * (AB + BC + AC);          

        if(AB + BC <= AC || AB + AC <= BC || AC + BC <= AB) printf("INVALID");
        else 
        {
            printf("%.2lf", (double) sqrt(p * (p - AB) * (p - BC) * (p - AC)));        
        }

        printf("\n");
    }
    
	return 0;
}







