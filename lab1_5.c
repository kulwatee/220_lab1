#include<stdio.h>
int main()
{
    int n,max,p;
    scanf("%d",&n);
    int m[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&m[i]);

    }
    max=m[0];
    for (int i=0;i<n;i++)
    {
        if(m[i]>=max)
        {
            max=m[i];
            p=i;
        }

    }
    for (int i=0;i<n;i++)
    {
        if(m[p]==m[i])
        {
            p=i;
            break;
        }
    }

    printf("%d %d",p+1,m[p]);

    return 0;
}
