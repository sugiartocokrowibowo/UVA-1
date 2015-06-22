#include<stdio.h>
#include<math.h>
int main()
{
    int t,test,aside,bside,cside;
    scanf("%d",&test);
    for(t=0;t<test;t++)
    {
        scanf("%ld %ld %ld",&aside,&bside,&cside);
        if( ( (aside+bside>cside) && (aside+cside>bside) && (bside+cside>aside))==1 )
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
