#include <stdio.h>

int main ()
{
  int a;
  int b;
  for (a=0; a < 5; a++) {
    for (b=0; b < 5; b++) {
        putchar('-');
      }
      putchar('\n');
    }
    return 0;
}
