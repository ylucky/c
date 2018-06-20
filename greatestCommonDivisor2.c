#include <stdio.h>
#include <stdlib.h>
int main(){
    //辗转相除法 
     int a,b;
     // a b t
     //12 18 12
     //18 12 6
     //12 6 0
     //6 0 //b=0,计算结束 
     int t;
     scanf("%d %d",&a,&b);
     while(b!=0){
      t=a%b;
      a = b;
      b=t;
     }
     printf("最大公约数是%d.\n",a); //47节 
     system("pause");
     return 0;    
}

