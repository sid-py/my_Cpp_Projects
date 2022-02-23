using namespace std;

#include <iostream>
class Base{
    public:
        virtual void print() { 
            cout <<" Base Print";
        }
};
 
class Derived: public Base{
    public:
        void print() {
            cout <<"Derived Print" ; 
        }
};
 
int main(){
    Base * bp;
    Derived obj;
 
    bp = &obj;
    bp->print();
}