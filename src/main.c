#include <stdio.h>
#include "func.h"

int main(int argc, char *argv[])
{
    printf("Hello World!\n");

    double x = 3.0;
    double y = myfunc(x);

    printf("func(%lg) = %lg\n", x, y);

    return 0;
}
