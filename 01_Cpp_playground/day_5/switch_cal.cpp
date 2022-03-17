#include<iostream>

int main(){
    char operation = '+';

    int n1, n2;

    std::cout << "Enter the numbers N1 and N2 separated by +,-,* or / in between: "<< std::endl;
    std::cin >> n1;
    std::cin >> operation;
    std::cin >> n2;
 
    switch(operation){
        case '+':
        std::cout << n1 << " + " << n2 << " = " << n1 + n2;
        break;

        case '-':
        std::cout << n2 << " - " << n1 << " = " << n2 - n1;
        break;
        
        case '*':
        std::cout << n1 << " * " << n2 << " = " << n1 * n2;
        break;
        
        case '/':
        std::cout << n2 << " / " << n1 << " = " << n2 / n1;
        break;

        default:
        std::cout << "Invalid input." ;
        break;       
        
    }


}