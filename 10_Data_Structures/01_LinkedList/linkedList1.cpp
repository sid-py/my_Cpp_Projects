// Full implementation of all the operations of a Linked List


#include<iostream>
#include<vector>
using namespace std;


class LinkedList{
    private:
        //Structure containing a data part and a link part
        struct Node
        {
            int data;
            Node* link;
        }*p;

    public:
        LinkedList();
        void append (int num);
        void addAtBeg(int num);
        void addAfter(int loc, int num);
        void display();
        int count();
        void del (int num);
        ~LinkedList();
};

// Initializes data member
LinkedList::LinkedList(){
    p = nullptr;
}
// adds a node at the end of the LinkedList
void LinkedList::append(int num){
    Node* temp, *r;
    // If the list is empty, create the first node
    if(p == nullptr){
        temp = new Node;
        temp->data = num;
        temp->link = nullptr;
        p = temp;
    }

    else{
        // Go to the last node
        temp = p;
        while(temp->link != nullptr)
        temp = temp->link;
        // add node at the end
        r = new Node;
        r->data = num;
        r->link = nullptr;
        temp->link = r;
    }
}

// adds a new node at the beginning of the linked List
void LinkedList::addAtBeg(int num){

    Node* temp;
    // add new node
    temp = new Node;
    temp->data = num;
    temp->link = p;
    p = temp;

}

// Adds a new node after the specified number of nodes
void LinkedList::addAfter(int loc, int num){
    Node* temp, *r;
    temp = p;

    //Skip to desired position
    for(int i = 0; i< loc; ++i){
        temp = temp->link;
        //if end of the linked list is encountered
        if(temp == nullptr){
            cout << "There are less than " << loc << " elements in the list." << endl;
            return;
        }
    }
    // insert new node
    r = new Node;
    r ->data = num;
    r-> link = r;

}

// display the contents of the list
void LinkedList::display(){
    Node* temp = p;
    // traverse the entire Linked list
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

// counts the number o nodes present in the Linked List
int LinkedList::count(){
    int c{0};
    Node* temp = p;
    // traverese the entire Linked List
    while(temp != nullptr){
        temp = temp->link;
        c++;
    }
    return c;
}

// Deletes the specified node from the list
void LinkedList:: del(int num){
    Node* old, *temp;

    temp = p;
    while(temp != nullptr){
        if(temp->data== num){
            //If node to be deleted is the first node of the list
            if(temp == p){
                p = temp->link;
                // delete the intermediate nodes in the linked list
                
            }
            else{
                old->link = temp->link;
                // free the memory occupied by the node
                delete temp;
                return;
            }
        }
        // raverse the list till the last node is reached
        else{
            // old points to the previous node
            old = temp;
            // go to the next node
            temp = temp-> link;
        }
    }
    cout << "Element " << num << " not found!" << endl;

}

// deallocates memory
LinkedList::~LinkedList(){
    Node* q;
    while(p != nullptr){
        q = p->link;
        delete p;
        p = q;

    }
}


int main(){
    LinkedList myList;

    cout << "No. of elements: " << myList.count() << endl;

    vector<int> myVec{4,65,89,81,23,65,44,77,58};
    for(auto i: myVec){
        myList.append(i);
    }
    myList.display();
    myList.del(58);
    myList.display();
    myList.addAtBeg(789);
    myList.display();
}