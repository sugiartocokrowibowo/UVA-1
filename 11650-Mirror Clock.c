#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char time[6],hour[3],mins[3];
    int test,i,j,k,hr,min,mirror_hr,mirror_min;
    scanf("%d",&test);
    for (i=1;i<=test;i++)
    {
        scanf("%s",time);
        for(j=0;time[j]!=':';j++)
            hour[j]=time[j];
        hour[j]='\0';
        for(k=0;time[j+1]!='\0';j++&&k++)
            mins[k]=time[j+1];
        mins[k]='\0';
        hr=atoi(hour);
        min=atoi(mins);
        mirror_min=60-min;
        if(min==00)
            mirror_hr=12-(hr);
        else
            mirror_hr=12-(hr+1);
        if(mirror_hr<0)
            mirror_hr=12+mirror_hr;
        if(mirror_hr==0)
            mirror_hr=12;
        if(mirror_min==60)
            mirror_min=00;
        if((mirror_min<=9)&&(mirror_hr<=9))
            printf("0%d:0%d\n",mirror_hr,mirror_min);
        else if ( (mirror_min>=9)&&(mirror_hr<=9) )
            printf("0%d:%d\n",mirror_hr,mirror_min);
        else if( (mirror_min<=9)&&(mirror_hr>=9) )
            printf("%d:0%d\n",mirror_hr,mirror_min);
        else
            printf("%d:%d\n",mirror_hr,mirror_min);

    }
    return 0;
}
