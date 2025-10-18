//
#include "question4.h"

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
{
    if (sales < 0)
        return 0;
    else if (sales <= 499)
        return sales * 0.05;
    else if (sales <= 999)
        return sales * 0.06;
    else if (sales <= 1499)
        return sales * 0.07;
    else
        return sales * 0.08;
}
