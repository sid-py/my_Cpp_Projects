# include <iostream>

int main(){
    // Defining an Array and assigning values to it.
    int myNums[5] = {30,12,11,88,16};

    std::cout << myNums << std::endl; // Here, the array name symbolizes the pointer to this array.
    std::cout << &myNums[0] << std::endl; // The memory address of the array is = zeroth element's memory address.

    std::cout << (myNums + 3) << std::endl; // Adding 3 to the pointer, we can access the memory address of the 4th location.
    std::cout << *(myNums + 3) << std::endl; // By dereferencing the pointer array, we can access the value stored in it.

    //Defining an empty array of size 5;
    int myNewNums[5]; 
    std::cout << "\n" << std::endl;
    std::cout << myNewNums << std::endl;

    // Entering values into the array.
    for(int i=0; i<=5; i++){
        std::cout << "Enter number: " << std::endl;
        std::cin >> myNewNums[i];
    }
    // Using pointer designation to retreive the entered values.
    for(int j=0; j<=5; j++){
        /*Here, the array name symbolizes the pointer to this array. 
        By adding i, we can loop through the array locations 
        and * dereferences and retreives the values stored.*/
        std::cout << *(myNewNums + j)<< std::endl; 
    }

}