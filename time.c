#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour1,minute1;
    int hour2,minute2;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    //int t1 = hour1*60 + minute1;
    //int t2 = hour2*60 + minute2;
    int t1 = hour2-hour1;
    int t2 = minute2-minute1;
    if(t2<0){
       t2=60+t2;
       t1--;
    }
    //int t = t2-t1;
    printf("ʱ�����%dСʱ%d����",t/60,t%60);
    system("pause");
    return 0;
}
