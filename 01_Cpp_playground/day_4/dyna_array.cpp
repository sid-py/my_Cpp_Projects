#include<iostream>

int main()
{
    int size;

    std::cout << "Enter the size of the array: " << std::endl;
    std::cin >> size;
    // Allocating dynamic memory to the aaray.
    int *myArray = new int[size];

    for(int i =0; i<size; i++)
    {
        std::cout <<"Array[" << i <<"]: " << std::endl;
        std::cin >> myArray[i];        
    }

    std::cout <<"\n" << "The element in myArray are: " << std::endl;

    for(int i = 0; i< size; i++){
        std::cout << myArray[i] << "  " << std::endl;
    }

    //de-allocating dynamic memory from the Array.------VERY IMP Step!
    delete[] myArray;
    myArray = NULL;
}