#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s;
    scanf("%d",&n);
    for(i=1,s=1;i<=n-1;i++)
    {
        s=(s+1)*2;
    }
    printf("%d",s);
    return 0;
}
