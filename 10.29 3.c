#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float m,h,s;
    scanf("%f %d",&m,&n);
    if(n==1)
        {
            h=m/2,s=m,printf("%-.2f %-.2f",h,s);
         }
    if(n>=2)
    {
        for(i=2,h=m/2,s=m;i<=n;i++)
        {
            s=s+2*h;
            h=h/2;
        }
        printf("%-.2f %-.2f",h,s);
    }
    return 0;
}
