#include <stdio.h>

int main()
{
    int alphabet;

    for(alphabet='a';alphabet<='z';alphabet=alphabet+2)
    {
        putchar(alphabet);
    }
    putchar('\n');
    return(0);
}
