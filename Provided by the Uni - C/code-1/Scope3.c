#include <stdio.h>

int function1() {

   int x = 1;
   int y = 1;

   for (int i = 0; i < 3; i++) {
      x += i;

      printf("i = %i\n", i);
   }

   for (int i = 0; i < 3; i++) {
      y += i;

      printf("i = %i\n", i);
   }
   
return 0;

}

int main() {

function1();
   printf("i = %i\n", i);

} //main
