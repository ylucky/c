#include <stdio.h>
#include <stdlib.h>

int main(){
  char c = 127;
  int i = 255;
  c = c-1;
  printf("c=%d,i=%d\n",c,i);
  system("pause");
  return 0;
}
