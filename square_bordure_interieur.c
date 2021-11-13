#include <stdio.h>

void e89_print_square(int height, int width, char letter, char inside)
{
  int height_compteur;
  int width_compteur;
  for (height_compteur=0; height_compteur < height; height_compteur++) {
    for (width_compteur=0; width_compteur < width; width_compteur++) {
        if (height_compteur == 0 || height_compteur == height-1 || width_compteur == 0 || width_compteur == width-1)
        {
            putchar(letter);
        }
        else 
        {
            putchar(inside);
      }
    }
      putchar('\n');
    }
}

// Fonction de test //

int main (void) {
  e89_print_square(6, 4, '#', '-');
  return 0;
}
