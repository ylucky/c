#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3;
    int b = 12;
    int c;
    
    c = a;
    a = b;
    b = c;
    
    printf("a=3,b=12½»»»ºóa=%d,b=%d",a,b);
    
    system("pause");
    return 0;
}
