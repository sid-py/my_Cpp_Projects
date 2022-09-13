#include<iostream>

signed char ch;

int main(){
    ch = 33;

    std::cout <<"The value in variable 'ch' is:  "<<  static_cast<int>(ch) << std::endl;

    // Usage of const keyword 

    const double PI{3.1415926};

    std::cout << PI;

    // PI = 32;// illegal

    std::cout << PI; 
}