#include <stdio.h>
#include <stdlib.h>

int main()
{
    //��ʼ�� 
    int amount = 0; 
    int price = 0;//��ʶ�� ��ĸ  ����  �»���  ��ʼ��
    
    //������ֵ 
    printf("������Ʊ��");
    scanf("%d",&amount);
     
    printf("�������Ԫ����");
    scanf("%d",&price);//&+���� 
    
    int change = amount-price;//��ʹ�ñ���֮ǰҪ��һ�θ�ֵ  c99 
    if(amount>=price)
        printf("����%dԪ��\n",change); 
    else
        printf("����Ǯ������");      
    
    system("pause"); 
    return 0;   
} 
