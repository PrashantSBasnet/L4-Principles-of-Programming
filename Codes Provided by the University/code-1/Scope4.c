#include <stdio.h>
int function1();
int function2();

int function1() {

   int x = 1;
   int y = 1;

   for (int i = 0; i < 3; i++) {
      x += i;
   }

   for (int i = 0; i < 3; i++) {
      y += i;
   }
   
return 0;

}

int function2() {

   int i = 1;
   int sum = 0;

   for (int i = 0; i < 10; i++) {
      sum += i;
      printf("i (in loop) = %i\n",i);
   }
   
   printf("i (original) = %i\n",i);

return 0;

}


int main() {

  function1();
  function2();

}
