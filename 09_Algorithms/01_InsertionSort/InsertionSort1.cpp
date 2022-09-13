/*
A simple program to sort a list of integers using "Insertion Sort" algorithm.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Sorting Algorithm
void insertion_sort(vector<int>&v, int n){ // Pass value by reference here only!
    int key, i, j;

    for(i=1; i<n; ++i){
        key = v[i];
        j = i;
        while((j>0) && (v[j-1] > key)){
            v[j] = v[j-1];
            --j;
        }
        v[j] = key;
    }    
}
// To display the sorted elements.
void printList(vector<int>v, int size){
    for(int i=0; i<size; ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> myList{8,9,33,45,6,87,11,287,0};
    int size = myList.size();
    insertion_sort(myList, size);
    printList(myList, size);
}