#include <iostream>

//Function min-max definition
int getMinMax(int numbers[], int size, int* minNum, int* maxNum) // Passing in min and max numbers as pointers
{
    for(int i = 1; i< size; i++){
        if(numbers[i] < *minNum) *minNum = numbers[i];
        if(numbers[i] > *maxNum) *maxNum = numbers[i];
    }
//Function min-max declaration 
int getMinMax(int numbers[], int size, int* minNum, int* maxNum);

}

int main()
{
    int numbers[5] = {72,45,-89,-78,196};
    int minN = numbers[0];
    int maxN = numbers[0];

    getMinMax(numbers, 5, &minN, &maxN); 

    std::cout << "The min Number is: " << minN << std::endl;
    std::cout << "The max Number is: " << maxN << std::endl;

}