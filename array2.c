#include <stdio.h>
#include <stdlib.h>

int main(void){
  const int number = 10; //数组大小 
  int x;
  int count[number];//定义数组 
  int i;
  for(i=0;i<number;i++){//初始化数组 
   count[i]=0;
  }
  scanf("%d",&x);
  while(x!=-1){//输入-1退出循环 
   if(x>=0&&x<=9){
    count[x]++;//数组参与运算 
   }
   scanf("%d",&x);
  }
  for(i=0;i<number;i++){
   printf("%d:%d\n",i,count[i]);
  }
  system("pause");
  return 0;
}
