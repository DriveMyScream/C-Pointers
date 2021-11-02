#include <stdio.h>
void increament(int a) {
    a = a + 1;
    printf("The Address of a in function is %d\n", &a);
}
int main() {
  
// Pass By Value
   int a = 10;
   increament(a);
   printf("The Address of a in Main Function is %d\n", &a);
return 0;
}