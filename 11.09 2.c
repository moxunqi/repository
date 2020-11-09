#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,n,one,l;
    char b[6];
    scanf("%d",&a);
    for(n=1;n<=a;n++)
    {
        one=0;
        scanf("%s",b);
        l=strlen(b);
        if(l==5)printf("3\n");
        else
        {
            if(b[0]=='o')one++;
            if(b[1]=='n')one++;
            if(b[2]=='e')one++;
            if(one>=2)printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}
