#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n,k,t,i,a,b,c,d,e,f;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld",&n,&k);
        a=n;
        for(c=0;;)
        {
            if(n==1)break;
            if(n%2!=0)
            {
                c++;
                n=(n-1)/2;
            }
            else n=n/2;
        }
        if(c+1<=k)
        {
            printf("0\n");
            continue;
        }
        e=c+1;
        for(n=a,b=0,d=1,f=0;;)
        {
            if(n%2!=0)
            {
                if(f!=0)
                {
                    b=b+d-f;
                    e=e-1;
                }
                if(e==k)break;
                if(f==0)f=d;
                else f=d*2;
                n=(n-1)/2;
                d=d*2;

            }
            else
            {
                n=n/2;
                d=d*2;
            }
        }
        printf("%ld\n",b);
    }
    return 0;
}
