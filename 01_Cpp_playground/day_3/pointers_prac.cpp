# include<iostream>

int main(){
    //Defining a variable and assigning a value to it.
    int n= 5;
    //Printing the address of this variable with '&' sign..
    std::cout <<"Value of n=  "<< &n << std::endl;
    //defining a pointer and assigning its value as address of variable n.
    int* ptr = &n;
    std::cout << "Address stored as value at 'ptr' =  "<<ptr <<" (Address of variable 'n')"<< std::endl;
    /* Dereferencing a pointer: Means accessing the value which is 
    stored at the address its pointing to. In this case 'n'.*/
    std::cout <<"Value at the stored address = " << *ptr<< std::endl;

    *ptr = 15;

    std::cout << "n = "<< n<< std::endl;


}