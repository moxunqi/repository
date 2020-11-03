#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,s=0,e,n,m,z,y;
    while(1)
    {
        a=getchar();
        if(a=='0')break;
        m=a-48;
        while(1)
        {
            for(y=0;;)
            {
                b=getchar();
                if(b==' '||b=='\n')break;
                z=b-48;
                m=m*10+z;
            }
            y=y+m;
            if(b==' '||b=='\n')break;
        }
        for(s=0,n=1;n<=y;n++)
        {
            for(e=0;;)
            {
                c=getchar();
                if(c=='\n'||c==' ')break;
                d=c-48;
                e=e*10+d;
            }
            s=s+e;
        }
        printf("%d\n",s);
    }
    return 0;
}
