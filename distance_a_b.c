#include <stdio.h>

int e89_distance(int a, int b)
{
    int c = 0;
    if (a > b) {
         c = a - b;
    }else{
         c = b - a;
    }
    return c;
}
