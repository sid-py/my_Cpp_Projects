/* A simple program to explain method and usage of function pointers.*/
#include<iostream>

int getSum(int a, int b){
    return a + b;

}

int main(){
    // std::cout << getNumber() << std::endl;
    // std::cout << getNumber <<std::endl;


    // Defining function pointers. A pointer which points to a function.
    // There are muiltiple other scenarios where function pointers help reduce complexity.

    int(*funcPtr)(int, int) = getSum;
    std::cout << funcPtr(4,58) <<std::endl;


}