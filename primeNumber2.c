#include <stdio.h>
#include <stdlib.h>
int main(){
     int x;
     int cnt = 0;
     //for(i=1;i<=100;i++){
     x=1;
     while(cnt<50){
       int i;
       int isPrime = 1; //x是素数？除了1和它本身以外不再有其他因数 
       for(i=2;i<x;i++){
          if(x%i==0){ //不是素数 
            isPrime = 0;
             break; 
          }
       }
       if(isPrime == 1){
          cnt++;
          printf("%d\t",x);//\t
          if(cnt%5==0){
            printf("\n");             
          }
       }
       x++;
     }
     
     system("pause");
     return 0;    
 }
