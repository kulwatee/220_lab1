#include<stdio.h>
int main()
{
    int min=0,t1=0,hour=0;
    float t2;
    scanf("%f",&t2);
    t1=t2*100;
    min=t1%100;
    hour=t2;
    if(hour>=0&&hour<=11)
    {

            if(min>=0&&min<10)
            {
                printf("%d:0%d a.m.",hour,min);
            }
            else
            {
                printf("%d:%d a.m.",hour,min);
            }

    }
    else if(hour>=12&&hour<=23)
    {
        if(hour>12)
        {
            hour=hour-12;
        }

            if(min>=0&&min<10)
            {
                printf("%d:0%d p.m.",hour,min);
            }
            else
            {
                printf("%d:%d p.m.",hour,min);
            }

    }

    return 0;
}
