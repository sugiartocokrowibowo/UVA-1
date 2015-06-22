#include<stdio.h>
int main()
{

    int counter1=1,counter2,press;
    int t;
    char sms[100];
    scanf("%d",&t);
    getchar();
    while(counter1<=t)
    {
        press=0;
        gets(sms);
        for (counter2=0;sms[counter2]!='\0';counter2++)
        {

            if( (sms[counter2]=='a')||(sms[counter2]=='d')||(sms[counter2]=='g')||(sms[counter2]=='j')||(sms[counter2]=='m')||
                (sms[counter2]=='p')||(sms[counter2]=='t')||(sms[counter2]=='w')||(sms[counter2]==' ') )
            {
                press=press+1;
            }
            if( (sms[counter2]=='b')||(sms[counter2]=='e')||(sms[counter2]=='h')||(sms[counter2]=='k')||(sms[counter2]=='n')||
                (sms[counter2]=='q')||(sms[counter2]=='u')||(sms[counter2]=='x') )
            {
                press=press+2;
            }
            if( (sms[counter2]=='c')||(sms[counter2]=='f')||(sms[counter2]=='i')||(sms[counter2]=='l')||(sms[counter2]=='o')||
                (sms[counter2]=='r')||(sms[counter2]=='v')||(sms[counter2]=='y') )
            {
                press=press+3;
            }
            if( (sms[counter2]=='s')|| (sms[counter2]=='z') )
            {
                press=press+4;
            }
        }
        printf("Case #%d: %d\n",counter1,press);
        counter1++;
    }
    return 0;
}
