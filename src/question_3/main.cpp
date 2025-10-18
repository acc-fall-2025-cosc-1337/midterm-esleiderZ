#include <iostream>
#include <limits>
#include "question3.h"

int main()
{
    char choice;

    do
    {
        int num1, num2;

        while (true)
        {
            std::cout << "Enter first number (1–200): ";
            std::cin >> num1;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter an integer between 1 and 200.\n";
            }
            else if (num1 < 1 || num1 > 200)
            {
                std::cout << "Number out of range. Try again.\n";
            }
            else
            {
                break;
            }
        }

        while (true)
        {
            std::cout << "Enter second number (1–200): ";
            std::cin >> num2;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter an integer between 1 and 200.\n";
            }
            else if (num2 < 1 || num2 > 200)
            {
                std::cout << "Number out of range. Try again.\n";
            }
            else
            {
                break;
            }
        }

        int gcd = mains(num1, num2);

        if (gcd == -1)
        {
            std::cout << "No common factors found. (-1) \n";
        }
        else
        {
            std::cout << "The greatest common divisor is: " << gcd << "\n";
        }

        std::cout << "Do you want to try again? (y/n): ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Program ended.\n";
    return 0;
}