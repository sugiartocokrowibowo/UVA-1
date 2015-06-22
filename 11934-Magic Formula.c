/* 30-4-2013,3:33PM*/

#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,d,l,counter,fsum;
    while(scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&l)==5)
    {
        counter=0;
        if( (a==0)&&(b==0)&&(c==0)&&(d==0)&&(l==0) )
            return 0;
        while(l>=0)
        {
            fsum=a*l*l + b*l +c;
            if(fsum%d==0)
                counter++;
            l--;
        }
        printf("%ld\n",counter);
    }
}
