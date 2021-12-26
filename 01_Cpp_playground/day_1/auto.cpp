#include<iostream>
#include<array>

int main(){
    std::array<int, 10> arr;
    arr[0] = 1;
    std::cout<< "First element of the array is " << arr[0]<<std::endl;
    std::array<int,10> arr2 ={45,87,98,63,78,98,52,32,12,9};
    // std::cout<<arr2[2];

    for(auto it =arr2.end()-1; it!=arr2.begin()-1; it--){
        auto num = *it;
        std::cout<<num<<std::endl;
    }
    std::cout<<"cumulative sum of numbers: "<<std::endl;
    int sum = 0;
    for(auto num : arr2){
        sum += num;
        std::cout<<sum<<std::endl;
    }

}