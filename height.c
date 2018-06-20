#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("请分别输入身高的英尺和英寸：");
    double foot; //双精度浮点数 
    double inch;
    
    scanf("%lf %lf",&foot,&inch); 
    printf("身高是%f米。\n",(foot+inch/12)*0.3048);
    
    printf("%d\n",10/3*3);//9 
    printf("%f\n",10.0/3*3);//10.000000 单精度浮点数 
    
    system("pause"); 
    return 0;   
} 
