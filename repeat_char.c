#include <stdio.h>

void e89_repeat_char (char c, int nbr)

{
  for (int i = 0; i<nbr;i++){
        putchar(c);
    }
  putchar('\n');
}

// Fonction de test //

int main()
{
    e89_repeat_char('a', 4);
    e89_repeat_char('z', 3);
    e89_repeat_char('$', 0);
    e89_repeat_char('_', -1);
    return 0;
}
