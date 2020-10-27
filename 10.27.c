#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,N,c,i,r,j,a;
    while(scanf("%d %c",&N,&c)!=EOF){
    if(N<=1000&&N>0){
    for(n=1;;n++)
    {
        if(2*n*n+4*n+1>N&&2*n*n-1<=N)break;
    }
    r=N-(2*n*n-1);
    for(j=1,a=n;j<=n;j++,a--)
    {
         for(i=1;i<=j-1;i++)
         {
             printf(" ");
         }
         for(i=1;i<=2*a-1;i++)
         {
             printf("%c",c);
         }
         printf("\n");
    }
    for(j=2;j<=n;j++)
    {
        for(i=1;i<=n-j;i++)
        {
            printf(" ");
        }
        for(i=1;i<=2*j-1;i++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d\n",r);
    }
    }
    return 0;
}

