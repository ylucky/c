#include <stdio.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int number = rand()%100+1;//[0-99]
    int a = 0;
    int count = 0;
    printf("���Ѿ������һ��1-100֮�������",a);
    
    do{
       printf("������1��100֮�������");
       scanf("%d",&a);
       count++;
       if(a>number){
          printf("��µ�������"); 
       }else if(a<number){
          printf("��µ���С��");
       }                                   
    }while(a!=number); 
    printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n",count);
    system("pause");
    
    return 0;
}
