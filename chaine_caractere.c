#include <stdio.h>
 
int main(void)
{
  char buffer[32];
  int test_int = 1234567890;
  int len = sprintf(buffer, "%d", test_int);
  printf("Nombre: %d\nChaine: \"%s\" (%d car.)\n", test_int, buffer, len);
}
