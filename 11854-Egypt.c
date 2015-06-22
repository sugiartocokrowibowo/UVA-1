#include<stdio.h>
#include<math.h>
int main()
{
    long int a_side,b_side,c_side;
    while(scanf("%ld %ld %ld",&a_side,&b_side,&c_side)==3)
    {
        if((a_side==0)&&(b_side==0)&&(c_side==0))
            break;
        if((a_side+b_side>c_side)&&(b_side+c_side>a_side)&&(a_side+c_side>b_side))
        {
            if((c_side*c_side)==(a_side*a_side)+(b_side*b_side))
                printf("right\n");
            else if((a_side*a_side)==(b_side*b_side)+(c_side*c_side))
                printf("right\n");
            else if((b_side*b_side)==(a_side*a_side)+(c_side*c_side))
                printf("right\n");

            else
                printf("wrong\n");
        }
        else
            printf("wrong\n");
    }
    return 0;
}
