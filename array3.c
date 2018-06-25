#include <stdio.h>
#include <stdlib.h>
int search(int key,int a[],int length); 
//查找 
int main(void){
  int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};
  //int a[] = {[1]=2,4,[5]=6};
  //int b[] = a; 错误的 只能遍历 
  //下面大括号测试代码 
  {
   int i;
   //sizeof(a)/sizeof(a[0]) 永远正确 
   for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
    printf("%d ",a[i]);
   } 
   //测试代码结束
   
   int x;
   int loc;
   printf("请输入一个数字：");
   scanf("%d",&x);
   loc = search(x,a,sizeof(a)/sizeof(a[0]));
   if(loc!=-1){//找到了 
    printf("%d在%d个位置上\n",x,loc);
   }else{
    printf("%d不存在\n",x);
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
