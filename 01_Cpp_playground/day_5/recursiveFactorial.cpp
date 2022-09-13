#include<iostream>


int factorial(int n){
    if(n <= 0){
        return 1;
    }

    else{
        return factorial(n-1) * n;
    }
}
int main(){

    int num = 25, ans;

    ans = factorial(num);

    std::cout << "The answer of "<< num << "! is: " << ans << std::endl;

}