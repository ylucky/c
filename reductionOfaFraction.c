#include <stdio.h>
#include <stdlib.h>

int main(){
 int dividend,divisor;//分子  分母 
 scanf("%d/%d",&dividend,&divisor);
 int a = dividend;
 int b = divisor;
 int t;
 while(b>0){//辗转想转法 找到最大公约数 
  t = a%b;
  a = b;
  b = t;
 }
 printf("%d/%d\n",dividend/a,divisor/a);
 system("pause");
 return 0;
}
