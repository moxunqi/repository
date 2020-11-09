#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,n,l,an;
    char b[10000];
    while(scanf("%s",&b)!=EOF)
    {
        char c[5000]={'\0'},d[5000]={'\0'};
        l=strlen(b);
        if(l%2==0)
        {
            n=l/2;
            for(a=l-1,i=0;a>=n;a--,i++)
                c[i]=b[a];
            for(a=0,i=0;a<=n-1;a++,i++)
                d[i]=b[a];
            an=strcmp(c,d);
            if(an==0)printf("Yes\n");
            else printf("No\n");
        }
        else
        {
            n=(l-1)/2;
            for(a=l-1,i=0;a>=n+1;a--,i++)
                c[i]=b[a];
            for(a=0,i=0;a<=n-1;a++,i++)
                d[i]=b[a];
            an=strcmp(c,d);
            if(an==0)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
