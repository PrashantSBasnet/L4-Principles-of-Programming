#include <stdio.h>

int main() {

int a = 3;
  {
     int b = 2;
     printf("a = %i\n",a);
     printf("b = %i\n",b);
  }

   printf("a = %i\n",a);
   // printf("b = %i\n",b);

} //main
