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
     �̶�����-for
     ����ִ��һ��-do_while
     �������-while 
     */ 
     
     printf("%d!=%d\n",i,fact);
     system("pause");
     return 0;    
 }
