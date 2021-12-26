// Activity 3: Simulating a Queue for a Shared Printer in an Office

# include <iostream>
#include <queue>

    class Job
    {
        int id;
        std::string user;
        int time;
        static int count;

        Job(const std::string& u, int t) :user(u), time (t), id(++count)
        {}

        friend std::ostream& operator<<(std::ostream os, const Job& J)

        {
            os<<"id: "<< id<< ", user:"<<user<<", time"<< time << " seconds"<< std::endl; returnos;
        }

    };

    int Job::count = 0;

    class Printer
    {

    };
int main(){
}