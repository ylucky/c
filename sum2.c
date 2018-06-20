#include <stdio.h>
#include <stdlib.h>
int main(){
     int n;
     int i;
     double sum = 0.0;
     //int sign = 1;
     double sign = 1.0;
     scanf("%d",&n);
     for(i=1;i<n;i++){
      //sum += sign*1.0/i;
      sum += sign/i;
      sign = -sign;
     }
     printf("f(%d)=%f\n",n,sum);
     system("pause");
     return 0;    
}
