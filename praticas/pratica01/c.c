#include <stdio.h>

int main()


{
    int x = 1;
    {

    int y = x * 2;
    {
        int y = x + 1;
        int x = 10;
        printf("%d, %d\n", y--, ++x);
    }
    


    return 0;
    }
}