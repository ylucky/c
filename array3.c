#include <stdio.h>
#include <stdlib.h>
int search(int key,int a[],int length); 
//���� 
int main(void){
  int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};
  //int a[] = {[1]=2,4,[5]=6};
  //int b[] = a; ����� ֻ�ܱ��� 
  //��������Ų��Դ��� 
  {
   int i;
   //sizeof(a)/sizeof(a[0]) ��Զ��ȷ 
   for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
    printf("%d ",a[i]);
   } 
   //���Դ������
   
   int x;
   int loc;
   printf("������һ�����֣�");
   scanf("%d",&x);
   loc = search(x,a,sizeof(a)/sizeof(a[0]));
   if(loc!=-1){//�ҵ��� 
    printf("%d��%d��λ����\n",x,loc);
   }else{
    printf("%d������\n",x);
   } 
    
    
   printf("\n");
  }
  system("pause");
  return 0;
}

int search(int key,int a[],int length){
  int ret = -1;
  int i;
  for(i=0;i<length;i++){
   if(a[i]==key){
    ret = i ;
    break;
   }
  }
  return ret;
} 
