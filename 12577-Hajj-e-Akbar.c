#include<stdio.h>
#include<string.h>
int main()
{
    char haz[50];
    int i,n=1;
    while((scanf("%s",haz)==1)&& haz[0]!='*')
    {

        i=strcmp(haz,"Hajj");
        if(i==0)
            printf("Case %d: Hajj-e-Akbar\n",n++);
        else
            printf("Case %d: Hajj-e-Asghar\n",n++);
    }
    return (0);
}
