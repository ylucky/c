#include <stdio.h>
#include <stdlib.h>

int main(void){
  const int number = 10; //�����С 
  int x;
  int count[number];//�������� 
  int i;
  for(i=0;i<number;i++){//��ʼ������ 
   count[i]=0;
  }
  scanf("%d",&x);
  while(x!=-1){//����-1�˳�ѭ�� 
   if(x>=0&&x<=9){
    count[x]++;//����������� 
   }
   scanf("%d",&x);
  }
  for(i=0;i<number;i++){
   printf("%d:%d\n",i,count[i]);
  }
  system("pause");
  return 0;
}
