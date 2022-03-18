using namespace std;

#include <iostream>
#include <vector>
#include<algorithm>

class SortedArraySquares {
 public:
  static vector<int> makeSquares(const vector<int>& arr) {
    int n = arr.size();
    int higestSquareIndx = n - 1;
    vector<int> squares(n);
    // TODO: Write your code here
    int left = 0, right = n - 1;
    while(left <= right){
        int leftNum = arr[left] * arr[left];
        int rightNum = arr[right] * arr[right];
        if(leftNum > rightNum){
            squares[higestSquareIndx--] = leftNum;  
            left++;          
        }
        else{
            squares[higestSquareIndx--] = rightNum;
            right--;
        }
 
    }
    
    return squares;
  }
};



int main(int argc, char* argv[]) {
  vector<int> result = SortedArraySquares::makeSquares(vector<int>{-2, -1, 0, 2, 3});
  for (auto num : result) {
    cout << num << " ";
  }
  cout << endl;

  result = SortedArraySquares::makeSquares(vector<int>{-3, -1, 0, 1, 2});
  for (auto num : result) {
    cout << num << " ";
  }
  cout << endl;
}