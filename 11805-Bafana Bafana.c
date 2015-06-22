#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n,k,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        while(p!=0)
        {
            ++k;
            if(k>n)
                k=1;
            --p;
        }
        printf("Case %d: %d\n",i+1,k);
    }
}
