#include <stdio.h>
#include <stdlib.h>
void sum(int begin,int end){
  int i;
  int sum = 0;
  for(i=begin;i<=end;i++){
     sum+=i;         
  } 
  printf("%d到%d的和是%d\n",begin,end,sum);
}
int main(){
  sum(1,10);
  sum(20,30);
  sum(35,45); 
  system("pause");
  return 0;
}
