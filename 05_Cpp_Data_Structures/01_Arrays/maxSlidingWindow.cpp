/*

Description#

Given a large array of integers and a window of size ww, find the current maximum value in the window as the window slides through the entire array.
Let’s try to find all maximums for a window size equal to 33 in the array given below:
-4 2 -5 3 6

*/

#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> find_max_sliding_window(vector<int>& v, int window_size){
    vector<int>  result;

    if(v.size()> 0){
        if(window_size > v.size()){
            return result;
        }

        deque<int> window;

        //Find out max of first window
        for(int i = 0; i< window_size; ++i){
            while(!window.empty() && v[i] >=v[window.back()]){
                window.pop_back()
            }

        // 
    }
}