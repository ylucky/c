#include <stdio.h>
#include <stdlib.h>
int main(){
    //利用1 2 5角的硬币凑出10元以下的金额 
     int x;
     int one,two,five;
     int exit = 0; 
     scanf("%d",&x);
     for(one = 1;one<x*10;one++){
       for(two=1;two<x*10/2;two++){
         for(five=1;five<x*10/5;five++){
          if(one+two*2+five*5==x*10)
          {
           printf("可以用%d个1角%d个2角%d个5角得到%d元\n",one,two,five,x);
           exit = 1;
           break;
           //break,continue 只对本层循环 
          }
         }
         if(exit==1) break;
       } 
       if(exit==1) break;
     } 
     system("pause");
     return 0;    
}
