#include <stdio.h>
#include <stdlib.h>

int main() {

    int value;
    int absvalue;

    printf("Veuillez saisir une valeur entière ne dépassant pas (2147483648) : ");
    scanf("%d", &value);

    absvalue = abs(value);

    printf("La valeur absolue de %d vaut %d.\n", value, absvalue);

    return 0;
}
