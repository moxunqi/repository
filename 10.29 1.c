#include<stdio.h>
#include <stdlib.h>
int main()
{
    long a,i,sum,N;
    scanf("%ld",&N);
    for(a=1;a<=N;a++)
    {
        for(i=1,sum=0;i<a;i++)
        {
            if(a%i==0)sum=sum+i;
            else continue;
        }
        if(sum==a)printf("%ld its factors are ",a);
        else continue;
        for(i=1,sum=0;i<a;i++)
        {
            if(a%i==0)printf("%ld ",i);
            else continue;
        }
        printf("\n");
    }
    return 0;
}
