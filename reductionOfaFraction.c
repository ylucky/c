#include <stdio.h>
#include <stdlib.h>

int main(){
 int dividend,divisor;//����  ��ĸ 
 scanf("%d/%d",&dividend,&divisor);
 int a = dividend;
 int b = divisor;
 int t;
 while(b>0){//շת��ת�� �ҵ����Լ�� 
  t = a%b;
  a = b;
  b = t;
 }
 printf("%d/%d\n",dividend/a,divisor/a);
 system("pause");
 return 0;
}
