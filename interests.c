#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",x); 
    double amount  = x*(1+0.033)*(1+0.033)*(1+0.033);
    printf("%f",amount);
    
    system("pause");
    return 0;
}
