#include <iostream>

// defining a function with void pointer..
void print(void* ptr, char type){

    switch (type){
        case 'i': std::cout << *((int*)ptr) << std::endl; break; // Typecasting a void pointer with required data type and dereferencing it (with outermost *).
        case 'c': std::cout << *((char*)ptr) << std::endl; break; // Typecasting a void pointer with required data type and dereferencing it (with outermost *).
        case 'd': std::cout << *((double*)ptr) << std::endl; break; // Typecasting a void pointer with required data type and dereferencing it (with outermost *).
        case 'f': std::cout << *((float*)ptr) << std::endl; break; // Typecasting a void pointer with required data type and dereferencing it (with outermost *).
    }


}
void print(void* ptr, char type);

int main(){

    int number = 25;
    char letter = 's';
    print(&number, 'i');
    print(&letter, 'c');

}