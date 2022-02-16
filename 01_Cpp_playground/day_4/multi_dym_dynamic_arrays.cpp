#include<iostream>

int main()
{
    //Defining the rows and coloumns as intergers.
    int rows, cols;
    std::cout << "rows, cols: ";
    std::cin >> rows >> cols;

    //Allocating dynamic memory to a pointer of pointers.
    int** table = new int*[rows];
    for(int i = 0; i< rows; i++){
        table[i] = new int[cols];
    }
    table[1][2] = 88;

    //De-allocating memory from the multi-dimensional-array
     for(int i = 0; i< rows; i++){
        delete[] table[i];
    }
    //Deleting memory from pointer of the pointers (table)
    delete[] table;
    table = NULL;


}