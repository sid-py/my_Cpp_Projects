#include<iostream>

int digitSum(int n){

    if(n <= 10){
        return n;
    }
    else{
        return digitSum(n /10) + (n % 10);
        
   }

}

int main(){
    int n = 567;
    int ans = digitSum(n);

    std::cout << ans << std::endl;
}