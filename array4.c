#include <stdio.h>
#include <stdlib.h> 
//25���ڵ����� 
int main(void){
  const int maxNumber = 25;
  int isPrime[maxNumber];//�������� 
  int i;
  int x;
  for(i=0;i<maxNumber;i++){
   isPrime[i]=1;//ȫ����Ϊ1 
  } 
  for(x=2;x<maxNumber;x++){
   if(isPrime[x]){
    for(i=2;i*x<maxNumber;i++){//�ѱ�����Ϊ0 
     isPrime[i*x]=0;
    }
   }
  }
  for(i=2;i<maxNumber;i++){
   if(isPrime[i]){
    printf("%d\t",i);
   }
  }
  system("pause");
  return 0;
}

