#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,b,a[5],i,j;
    while(scanf("%c %d",&c,&b)!=EOF)
    {
        for(i=0;i<=(b-1)/2;i++)
        {
            a[i]=c+i;
        }
        for(j=0;j<=(b-1)/2;j++)
        {
            for(i=0;i<=(b-1)/2-j;i++)
                printf(" ");
            printf("%c",a[j]);
            for(i=1;i<=2*j-1;i++)
                printf(" ");
            if(j!=0)printf("%c",a[j]);
            printf("\n");
        }
        for(j=(b-1)/2-1;j>=0;j--)
        {
            for(i=0;i<=(b-1)/2-j;i++)
                printf(" ");
            printf("%c",a[j]);
            for(i=1;i<=2*j-1;i++)
                printf(" ");
            if(j!=0)printf("%c",a[j]);
            printf("\n");
        }
    }
    return 0;
}
