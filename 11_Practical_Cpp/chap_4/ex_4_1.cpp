/****************************************************************************
*
* Heading comments
*
****************************************************************************/

// data declarations 
#include <iostream>
#include <string>

int main()
{
    // executable statements
    std::string name;
    std::string socialSecurityNumber;
    std::string dateOfBirth;

    std::cout << "Enter your Name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter your Date of Birth: " << std::endl;
    std::cin >> dateOfBirth;
    std::cout << "Enter your Social Security Number: " << std::endl;
    std::cin >> socialSecurityNumber;
    return(0);
}