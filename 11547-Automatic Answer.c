/* 4:34 PM ; 30-4-2013*/

#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i,t,test,c1,c2,c3,c4,c,counter;
    scanf("%ld",&test);
    for (t=0;t<test;t++)
    {

        counter=0;
        scanf("%ld",&n);
        c1= (n*567)/9;
        c2=c1+7492;
        c3=c2 *235;
        c4=c3 / 47;
        c=c4-498 ;
        //printf("%ld\n",c);
        if( c==0 )
            printf("0\n");
        else
        {
            while(c)
            {
                i=c%10;
                c=c/10;
                counter++;
                if(counter==2)
                    break;
            }
            if(i<0)
                i=i*-1;
            printf("%ld\n",i);
        }
    }
    return 0;
}
