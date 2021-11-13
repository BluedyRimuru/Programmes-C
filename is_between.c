#include <stdio.h>
#include <stdlib.h>

int main () {

  int a;
  int b;
  int c;

  printf("Veuillez saisir une valeur entière qui sera l'entre deux : ");
  scanf("%d", &a);

  printf("Veuillez saisir la première valeur pour vérifier si la valeur est entre les deux : ");
  scanf("%d", &b);

  printf("Veuillez saisir la seconde valeur pour vérifier si la valeur est entre les deux : ");
  scanf("%d", &c);

  if (a>b && a<c) {
    printf("La valeur %d est bien entre %d et %d.\n", a, b, c);
  }
  else if(a<b && a>c) {
    printf("La valeur %d est bien entre %d et %d. \n", a, c, b);
  }    
  else printf("La valeur %d n'est pas entre %d et %d. \n", a, b, c);      
}
