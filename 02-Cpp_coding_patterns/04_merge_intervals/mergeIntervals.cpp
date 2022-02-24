#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Interval{
    public:
    int start = 0;
    int end = 0;

    Interval(int start, int end){
        this->start = start;
        this->end = end;

    }
};

class MergeIntervals{
    public:
    static vector<Interval> merge(vector<Interval> &intervals){
        if(intervals.size() < 2){
            return intervals;
        }

        // sort the intervals by start time 
        sort(intervals.begin(), intervals.end(),
        [](const Interval &x, const Interval &y){
            return x.start<y.start;});
            
               }
    }
};