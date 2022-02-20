using namespace std;

#include <iostream>

class HappyNumber {
 public:
  static bool find(int num) {
    // Algorithm to find Happy number

    int slow{num}, fast{num};
    do{
        slow = findSquareSum(slow);
        fast = findSquareSum(findSquareSum(fast));
    }while(slow != fast);
    return slow == 1;
  }

  private:
    static int findSquareSum(int num){
        int sum{0}, digit{0};
        while(num > 0){
            digit = num % 10;
            sum += digit * digit;
            num /=10;
        }
        return sum;
    }
};

int main(int argc, char* argv[]) {
  cout << HappyNumber::find(23) << endl;
  cout << HappyNumber::find(12) << endl;
  cout << HappyNumber::find(29) << endl;
  cout << HappyNumber::find(89) << endl;
  cout << HappyNumber::find(77) << endl;
}
