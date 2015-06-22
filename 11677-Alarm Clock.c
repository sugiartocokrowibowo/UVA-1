#include<stdio.h>
int main()
{
    long int hour_1,hour_2,min_1,min_2,min,hour,extra;
    while(scanf("%ld %ld %ld %ld",&hour_1,&min_1,&hour_2,&min_2)==4)
    {
        if((hour_1==0)&&(hour_2==0)&&(min_1==0)&&(min_2==0))
            break;
        extra=0;
        if(min_1>min_2)
        {

            extra=1;
            min=min_1-min_2;
            min=60-min;
        }
        else
            min=min_2-min_1;
        if(hour_1>=hour_2)
        {
            hour=hour_1-hour_2;
            hour=24-hour-extra;
            if(hour==24)
                hour=0;
        }
        else
            hour=hour_2-hour_1-extra;
        min=hour*60+min;
        printf("%ld\n",min);
    }
    return 0;
}
