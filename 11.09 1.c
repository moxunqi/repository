#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,n,t;
    char b[100];
    gets(b);
    a=strlen(b);
    for(i=0;i<=a-1;i++)
    {
        for(n=i+1;n<=a-1;n++)
        {
            if(b[i]>b[n])
            {
                t=b[i];
                b[i]=b[n];
                b[n]=t;
            }
        }
    }
    puts(b);
    return 0;
}
