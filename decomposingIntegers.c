#include <stdio.h>
#include <stdlib.h>
int main(){
     int x;
     //scanf("%d",x);
     x= 13425;
     do{
        int d = x%10;
        printf("%d",d);//5 2 4 3 1
        if(x>9){
          printf(" ");
        }   
        x/=10;
     }while(x>0);
     printf("\n");
     system("pause");
     return 0;    
}

