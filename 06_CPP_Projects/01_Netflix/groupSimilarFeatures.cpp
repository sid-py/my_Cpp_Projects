#include <bits/stdc++.h>
using namespace std;

void groupTitles(std::vector<std::string>& strs, std::vector<std::vector<std::string>> &output){
    if (strs.size() == 0) 
        return;
    std::unordered_map<std::string, std::vector<std::string>> res;

    std::vector<int> count(26, 0);
    for (auto s : strs) {
        
        for (char c : s){
            int index = c - 'a';
            count[index]++;
        }

        std::string key = "";
        for (int i = 0; i < 26; i++) {
            key += "#";
            key += std::to_string(count[i]);
        }
        res[key].push_back(s);
        std::fill(count.begin(), count.end(), 0);
    }

    for(auto itr : res){
        output.push_back(itr.second);
    }
}

int main() {
    // Driver code
    std::vector<std::string> titles = {"duel","dule","speed","spede","deul","cars"};

    std::vector<std::vector<std::string>> output;
    groupTitles(titles, output);
    std::string query = "spede"; 

    // Searching for all titles
    for (auto o : output){
        auto it = std::find (o.begin(), o.end(), query); 
        if (it != o.end()) 
        { 
            print(o);
        }
    }
}