#include <stdio.h>
#include <stdlib.h>
int main(){
    //շת����� 
     int a,b;
     // a b t
     //12 18 12
     //18 12 6
     //12 6 0
     //6 0 //b=0,������� 
     int t;
     scanf("%d %d",&a,&b);
     while(b!=0){
      t=a%b;
      a = b;
      b=t;
     }
     printf("���Լ����%d.\n",a); //47�� 
     system("pause");
     return 0;    
}

