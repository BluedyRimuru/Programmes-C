#include <stdio.h>

void e89_print_triangle (int size, char inside, char border)
{
  int i, j;
  for (i = 0; i < size + 1; i++) {
  for (j = 0; j < i; j++) {
  if (j == 0) {
  putchar(border);
  }else if (j == i - 1) {
  putchar(border);
  }else if (i == size) {
  putchar(border);
  }else{
  putchar(inside);
  }
}
  putchar('\n');
  }
}

// Fonction de test //

int main (void) {
  
  e89_print_triangle (8, '-', '#');
  return 0;
}
