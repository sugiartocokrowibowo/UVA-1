#include<stdio.h>
#include<math.h>
int main()
{
    int test,radius,i;
    double length,width,left,right;
    scanf("%ld",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%ld",&radius);
        length=radius*5;
        width=radius*3;
        left=length*.45;
        right=length-left;
        printf("Case %d:\n",i);
        printf("-%.0lf %.0lf\n",left,width/2);
        printf("%.0lf %.0lf\n",right,width/2);
        printf("%.0lf -%.0lf\n",right,width/2);
        printf("-%.0lf -%.0lf\n",left,width/2);
    }
    return 0;
}
