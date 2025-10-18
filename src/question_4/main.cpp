#include <iostream>
#include <limits>
#include "question4.h"

int main()
{
    char choice;

    do
    {
        double sales;

        while (true)
        {
            std::cout << "Enter sales amount: ";
            std::cin >> sales;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a numeric sales amount.\n";
            }
            else if (sales < 0)
            {
                std::cout << "Sales cannot be negative. Try again.\n";
            }
            else
            {
                break;
            }
        }

        double commission = get_sales_commission(sales);

        std::cout << "Sales of " << sales
                  << " yields a commission of " << commission << ".\n";

        std::cout << "Do you want to calculate another commission? (y/n): ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Program ended.\n";
    return 0;
}
