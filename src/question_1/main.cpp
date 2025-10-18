#include <iostream>
#include "question1.h"

int main()
{
    double gpa;
    char choice;

    do
    {
        std::cout << "Enter a GPA value (0.0 - 4.0): ";
        std::cin >> gpa;

        if (gpa >= 0.0 && gpa <= 4.0)
        {
            std::string letter = gpa_to_letter_grade(gpa);
            std::cout << "Letter grade: " << letter << "\n";
        }
        else
        {
            std::cout << "Error: GPA is out of range.\n";
        }

        std::cout << "Do you want to enter another GPA? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Program ended.\n";
    return 0;
}