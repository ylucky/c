#include <stdio.h>
#include <stdlib.h>
int main(){
    //����1 2 5�ǵ�Ӳ�Ҵճ�10Ԫ���µĽ�� 
     int x;
     int one,two,five;
     scanf("%d",&x);
     for(one = 1;one<x*10;one++){
       for(two=1;two<x*10/2;two++){
         for(five=1;five<x*10/5;five++){
          if(one+two*2+five*5==x*10)
          {
           printf("������%d��1��%d��2��%d��5�ǵõ�%dԪ\n",one,two,five,x);
           goto out;
           //break,continue ֻ�Ա���ѭ�� 
          }
         }
       } 
     } 
     out:
     system("pause");
     return 0;    
}