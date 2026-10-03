#include <stdio.h>

int main()
{
    char letter = 'K';
    char *ptr = &letter;

    printf("Character: %c\n", *ptr);

    *ptr = 'Z';

    printf("After modification: %c\n", letter);

    return 0;
}
