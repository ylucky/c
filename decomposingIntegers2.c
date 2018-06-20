#include <stdio.h>
#include <stdlib.h>
int main(){
     int x;
     //scanf("%d",x);
     x= 13425;
     /*12345/10000->1
     13425%10000->3425
     10000/10->1000*/ 
     int cnt = 0;
     int mask = 1;
     int t = x; 
     while(t>9){
      t/=10;
      mask*=10;
     }
     printf("mask=%d\n",mask);
     //int mask = 10000;
     
     do{
        int d = x/mask;
        printf("%d",d);
        if(mask>9){
          printf(" ");
        }  
        x%=mask;
        mask/=10;
        //printf("x=%d,mask=%d,d=%d\n",x,mask,d);
     }while(mask>0);
     printf("\n");
     system("pause");
     return 0;    
}

