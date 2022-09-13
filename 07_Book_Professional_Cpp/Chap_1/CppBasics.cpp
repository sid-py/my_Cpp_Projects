# include<iostream>
# include <limits>
# include <iomanip>
# include <stdexcept>




double divideNumbers(double numerator, double denominator){
    if(denominator ==0){
        throw std::invalid_argument {"Denominator cannot be 0."};

    }
    return numerator / denominator;
}

int main(){

    /*-------------
    // Below is an example of numeric_limits under limits module.
    std::cout << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::numeric_limits<int>::min() << std::endl;
    std::cout << std::numeric_limits<int>::lowest() << std::endl;

    std::cout << std::numeric_limits<double>::max() << std::endl;
    std::cout << std::numeric_limits<double>::min() << std::endl;
    std::cout << std::numeric_limits<double>::lowest() << std::endl;
    */

    /*--------
    Zero initialization
    int myInt {};
    float myFloat {};
    */

    /*----------
    Ternary operator:
    int num;
    std::cin >> num;
    std::cout << (num > 10 ? "The number should be lower than 10." : "The NUmber is lower than 10!");
    */
   

   /* An example of type casting by static_cast

     
   */

    //   int num1, ans;
    //   float num2;

    //   std::cin >> num1 >> num2;

    //   ans = static_cast<float>(num1 * num2);



    //   std::cout << "The value of num1 x num2 is: " << std::fixed << std::setprecision(2) << (ans) << std::endl;

    /*Exception Handling*/


    double ans = divideNumbers(5,5);
    std:: cout << ans;

}