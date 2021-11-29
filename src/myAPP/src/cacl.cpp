#include "cacl.h"
#include <stdio.h>


int Calculate::calculate(int a, int b, string symbol)
{
    if (symbol == "+")
    {
        return add(a, b);
    } else if (symbol == "-")
    {
        return sub(a, b);
    } else if (symbol == "*")
    {
        return mul(a, b);
    } else if (symbol == "/")
    {
        return div(a, b);
    } else
    {
        printf("error symbol\r\n");
        return -999999;
    }
    return -999999;
}

int Calculate::add(int a, int b)
{
    return a + b;
}

int Calculate::sub(int a, int b)
{
    return a - b;
}

int Calculate::mul(int a, int b)
{
    return a * b;
}

double Calculate::div(int a, int b)
{
    if (!isZero(b))
    {
        return a / b;
    }
    return 0.0;
}

bool Calculate::isZero(int x)
{
    return x > 0;
}
