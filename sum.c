#include <stdio.h>
#include <stdlib.h>
int main(){
     int n;
     int i;
     double sum = 0.0;
     scanf("%d",&n);
     for(i=1;i<n;i++){
      sum += 1.0/i;
     }
     printf("f(%d)=%f\n",n,sum);
     system("pause");
     return 0;    
}
