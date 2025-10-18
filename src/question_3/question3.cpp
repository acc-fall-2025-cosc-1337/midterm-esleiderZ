#include "question3.h"

bool test_config()
{
    return true;
}

int mains(int num1, int num2)
{
    int gcd = 1;

    for (int i = 1; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    if (gcd == 1)
        return -1;

    return gcd;
}
