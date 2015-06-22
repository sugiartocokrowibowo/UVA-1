#include<stdio.h>
#include<math.h>
int main()
{
    int road,num,counter,i,c=0,n;
    while( scanf("%d %d",&road, &num)==2)
    {
        c++;
        counter=0;
        if( (road==0)&&(num==0) )
            return 0;
        else
        {
            n=road-num;
            if ( (num*26)<n )
                printf("Case %d: impossible\n",c);
            else
            {
                while(n>0)
                {
                    n=n-num;
                    counter++;
                }
                printf("Case %d: %d\n",c,counter);
            }

        }
    }
    return 0;
}
