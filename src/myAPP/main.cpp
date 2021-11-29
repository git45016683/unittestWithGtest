#include <stdio.h>
#include "src/head/cacl.h"

int main(int argc, char *argv[])
{
    Calculate calc;

    printf("hello MAIN: %d\r\n", calc.calculate(3, 9, "+"));

    return 0;
}
