/*Bangladeshi Flag's Area Determinator*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,index;
    double length,wide,radius,red_part,rec_area,green_part;
    scanf("%d",&n);
    for (index=1;index<=n;index++)
    {
        scanf("%lf",&length);
        wide=(length/10.0)*6;
        radius=(length/10.0)*2;
        rec_area=length*wide;
        red_part=acos(-1)*(radius*radius);
        green_part=rec_area-red_part;
        printf("%.2lf %.2lf\n",red_part,green_part);
    }
    return 0;
}
