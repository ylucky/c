#include <stdio.h>
#include <stdlib.h>

int main(){
    //整数 
 printf("sizeof(char)=%ld\n",sizeof(char));//1字节 8bite 
 printf("sizeof(short)=%ld\n",sizeof(short));//2
 printf("sizeof(int)=%ld\n",sizeof(int));//4 取决于编译器 
 printf("sizeof(long)=%ld\n",sizeof(long));//4 取决于编译器
 printf("sizeof(long long)=%ld\n",sizeof(long long));//8
 system("pause");
 return 0;
}
