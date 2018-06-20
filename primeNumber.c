#include <stdio.h>
#include <stdlib.h>
int main(){
     int x;
     scanf("%d",&x);
     int i;
     int isPrime = 1; //x是素数？除了1和它本身以外不再有其他因数 
     for(i=2;i<x;i++){
        if(x%i==0){ //不是素数 
          isPrime = 0;
          break; 
        }
     }
     if(isPrime == 1){
        printf("是素数\n");
     }else{
        printf("不是素数\n");
     }
     system("pause");
     return 0;    
 }
