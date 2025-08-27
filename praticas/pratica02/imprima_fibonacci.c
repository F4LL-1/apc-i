#include <stdio.h>

int main()
{

    printf("%20i %i", 1, 1);
    printf("\n%19i %i %i", 1, 2, 1);
    printf("\n%17i %i %i %i %i", 1, 2, 3, 2, 1);
    printf("\n%15i %i %i %i %i %i %i", 1, 2, 3, 5, 3, 2, 1);
    printf("\n%13i %i %i %i %i %i %i %i %i", 1, 2, 3, 5, 8, 5, 3, 2, 1);

    return 0;
}