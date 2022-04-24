#include<iostream>

using namespace std;

class LinkedList{
    private:
        struct Node{
            int data;
            Node* link;
        }*p;

    public:
        LinkedList();
        void addAtBeg(int num);
        void reverse();
        void display();
        ~LinkedList();

};

LinkedList::LinkedList(){
    p = nullptr;
}

void LinkedList::addAtBeg(int num){
    Node* temp;
    temp = new Node;
    temp ->data = num;
    temp ->link = p;
    p = temp;
}

void LinkedList::reverse(){
    Node* q, *r, *s;
    q = p;
    r = nullptr;

    while(q != nullptr){
        s = r;
        r = q;
        q = q->link;
        r->link = s;
    }
    p = r;
}