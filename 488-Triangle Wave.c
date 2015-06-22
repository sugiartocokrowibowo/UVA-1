#include<stdio.h>
int main()
{
    int ampli,freequency,i,j,t,test,te;
    scanf("%d",&test);
    //printf("\n");
    for (te=1;te<=test;te++)
    {
        scanf("%d",&ampli);
        scanf("%d",&freequency);
        for(t=1;t<=freequency;t++)
        {
            for(i=1;i<=ampli;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
            for(i=ampli-1;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
            if(t!=freequency)
                printf("\n");

        }
        if(te!=(test))
            printf("\n");

    }
    return 0;
}
