#include <iostream>
#include "question2.h"

int main()
{
    double celsius;
    char choice;

    do
    {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> celsius;

        double fahrenheit = get_fahrenheit(celsius);
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << "\n";

        std::cout << "Do you want to convert another temperature? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Program ended.\n";
    return 0;
}
