
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=1.0,b=2.0,c=2.0,d=3.0,s=0,m,n;
    int N,i;
    scanf("%d",&N);
    if(N==1)s=2.0/1.0;
    if(N==2)s=2.0/1.0+3.0/2.0;
    if(N>2)
    {
        for(i=3,s=2.0/1.0+3.0/2.0;i<=N;i++)
        {
            m=b;
            n=d;
            b=a+m;
            d=c+n;
            a=m;
            c=n;
            s=s+d/b;
        }
    }
    printf("%-.2lf\n",s);
    return 0;
}
