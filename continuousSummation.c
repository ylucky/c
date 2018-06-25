#include <stdio.h>
#include <stdlib.h>

int main(){
 //s = a+aa+aaa...[n¸öa] 2,4 2468
 int a,n; //a[0-9] n[1,8]
 scanf("%d %d",&a,&n);
 int sum = 0;
 int i;
 int t = 0;
 //0*10+2 2*10+2  (2*10+2)*10+2 
 for(i=0;i<n;i++){
  t=t*10+2;
  sum+=t;
 } 
 printf("%d\n",sum);
 system("pause");
 return 0;
}
