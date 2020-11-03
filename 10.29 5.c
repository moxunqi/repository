#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double a,b,c,x;
    scanf("%lf",&x);
    for(a=x;;)
    {
        b=x;
        x=(x+a/x)/2.0;
        c=fabs(b-x);
        if(c<0.00001)break;
    }
    printf("%-.3lf",x);
    return 0;
}
