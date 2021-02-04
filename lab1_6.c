#include<stdio.h>
int main()
{
unsigned int n,m,q=0;
    unsigned long t;
    char z,ans;
    scanf("%u %u %lu",&n,&m,&t);
    scanf(" %c",&z);
    if(z=='L')
    {
        for (int i=1;i<t;i++)
        {
            q=q+n;
            if(q>=t)
            {
                ans='L';
                break;
            }
            q=q+m;
            if(q>=t)
            {
                ans='R';
                break;
            }
        }
    }
    else if(z=='R')
    {
        for (int i=1;i<t;i++)
        {
            q=q+m;
            if(q>=t)
            {
                ans='R';
                break;
            }
            q=q+n;
            if(q>=t)
            {
                ans='L';
                break;
            }
        }
    }
    printf("%c",ans);

    return 0;
}
