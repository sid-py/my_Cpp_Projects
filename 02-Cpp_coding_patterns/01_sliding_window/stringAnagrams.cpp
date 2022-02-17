using namespace std;

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class StringAnagrams {
 public:
  static vector<int> findStringAnagrams(const string &str, const string &pattern) {
    // TODO: Write your code here
    int windowStart = 0, matched = 0;
    unordered_map<char, int> charFrequencyIndex;
    for(auto chr:pattern){
        charFrequencyIndex[chr]++;
    }
    vector<int> resultIndices;
    for (int windowEnd = 0; windowEnd < str.length(); windowEnd++){
        char rightChar = str[windowEnd];
        //decrement the frequency of the matched character
        if(charFrequencyIndex.find(rightChar) != charFrequencyIndex.end()){
            charFrequencyIndex[rightChar]--;
            if(charFrequencyIndex[rightChar] == 0){
                matched++;
            }
        }

        if(matched == (int)charFrequencyIndex.size()){
            resultIndices.push_back(windowStart);
        }

        if(windowEnd >= pattern.length() - 1){
            char leftChar = str[windowStart++];
            if(charFrequencyIndex.find(leftChar) != charFrequencyIndex.end()){
                if(charFrequencyIndex[leftChar] == 0){
                    matched--;
                }
                charFrequencyIndex[leftChar]++;

            }


        }
    }


    return resultIndices;
  }
};