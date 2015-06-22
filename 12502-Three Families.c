#include<stdio.h>
int main()
{
    int testcase,counter1;
    float ratio;
    int a_hr,b_hr,t_money,a_money,b_money;
    scanf("%d",&testcase);
    for (counter1=1;counter1<=testcase;counter1++)
    {
        scanf("%d %d %d",&a_hr,&b_hr,&t_money);
        a_money=(t_money*(a_hr+(a_hr-b_hr)))/(a_hr+b_hr);
        if(a_money<=0)
            printf("0\n");
        else
            printf("%d\n",a_money);
    }
    return 0;
}
