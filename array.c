#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
  double sum = 0;
  int cnt = 0;
  int number[100];//��������  ������ ���- 
  scanf("%d",&x);
  while(x!=-1){
   number[cnt]=x;//�������е�Ԫ�ظ�ֵ 
   {
        int i;
        printf("%d\t",cnt);
        for(i=0;i<=cnt;i++){
         printf("%d\t",number[i]);
        }                         
        printf("\n");      
   } 
   sum+=x;
   cnt++;
   scanf("%d",&x);
  }
  if(cnt>0){
    int i;
    double average = sum/cnt;
    for(i = 0; i<cnt;i++){
     if(number[i]>average){//ʹ�������е�Ԫ�� 
      printf("%d",number[i]);//�������� 
     }
    }
  }
  
  system("pause");
  return 0;
}
