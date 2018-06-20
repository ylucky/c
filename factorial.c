#include <stdio.h>
#include <stdlib.h>
 int main(){
     int n;
     scanf("%d",&n);
     int i = n;
     int fact =1;
     /*while(i<=n){
         fact*=i;
         i++;
     }*/
     /*for(i=1;i<=n;i++){
       fact*=i;
     }*/
     for(;n>1;n--){
       fact*=n;
     }
     /*
     固定次数-for
     必须执行一次-do_while
     其它情况-while 
     */ 
     
     printf("%d!=%d\n",i,fact);
     system("pause");
     return 0;    
 }
