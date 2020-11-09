#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,a[1000],j,s,k;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=2;i<=n;i++)
        {
            for(j=1,k=0;j<i;j++)
                if(i%j==0)
                {
                    a[k]=j;
                    k++;
                }
            for(j=0,s=0;j<=k-1;j++)
                s=s+a[j];
            if(s==i&&i==6)printf("%d",i);
            if(s==i&&i!=6)printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
