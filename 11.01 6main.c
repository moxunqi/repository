#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,d,e,i,j,k,sum;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        for(d=1;;)
        {
            d=d*10;
            if(a/d<=9)break;
        }
        for(j=1;;)
        {
            j=j*10;
            if(b/j<=9)break;
        }
        i=j;
        for(e=a/d,sum=0;;)
        {
            j=i;
            for(k=b/j;;)
            {
                if(j==0)break;
                sum=sum+e*k;
                k=b*10/j-b/j*10;
                j=j/10;
            }
            e=a*10/d-a/d*10;
            d=d/10;
            if(d==0)break;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

