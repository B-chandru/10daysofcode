
#include <stdio.h>

int main() {
    int input,i;
  scanf("%d",&input);
  for(i=0;i<=input;i++)
    {
    if(i%2==0)
      {
      printf("%d is a even number\n",i);


      }else{
      printf("%d is a odd number\n",i);
      }
      }

   
    
    return 0;
}
