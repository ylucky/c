#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磺");
    double foot; //˫���ȸ����� 
    double inch;
    
    scanf("%lf %lf",&foot,&inch); 
    printf("�����%f�ס�\n",(foot+inch/12)*0.3048);
    
    printf("%d\n",10/3*3);//9 
    printf("%f\n",10.0/3*3);//10.000000 �����ȸ����� 
    
    system("pause"); 
    return 0;   
} 
