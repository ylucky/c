#include <stdio.h>
#include <stdlib.h>

int main()
{
    //初始化 
    int amount = 0; 
    int price = 0;//标识符 字母  数字  下划线  初始化
    
    //输入数值 
    printf("请输入票面");
    scanf("%d",&amount);
     
    printf("请输入金额（元）：");
    scanf("%d",&price);//&+变量 
    
    int change = amount-price;//在使用变量之前要有一次赋值  c99 
    if(amount>=price)
        printf("找您%d元。\n",change); 
    else
        printf("您的钱不够！");      
    
    system("pause"); 
    return 0;   
} 
