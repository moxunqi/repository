#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long sn,g,s,z,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld",&z);
        for(s=z,g=z,sn=z;;)
        {
            a=g%4;
            b=s%2;
            n=(s-b)/2+(g-a)/4;
            sn=sn+n;
        }
    }
    return 0;
}
