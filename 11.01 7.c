#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,a[1000],j,k,m,l;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)break;
        for(i=0;i<=n-1;i++)
            scanf("%d",&a[i]);
        for(i=0;i<=n-1;i++)
        {
            k=a[i];
            m=0;
            l=sqrt(k);
            for(j=1;j<=l;j++)
            {
                if(k%j==0)m++;
            }
            if(k==1)printf("1\n");
            else if(k==l*l)printf("%d\n",2*m-1);
            else printf("%d\n",2*m);
        }

    }
    return 0;
}
