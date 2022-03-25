#include "LinkedList.h"

//Function inserts a value/new Node as the first Element of list
void LinkedList::insertAtHead(int value) {
  Node * newNode = new Node(); //creating a new node
  newNode -> data = value;
  newNode -> nextElement = head; //Linking newNode to head's pointer
  head = newNode; //head pointing to the start of the list
  cout << value << " Inserted !    ";
}


void LinkedList::insertAtTail(int value){

  if(isEmpty()){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->nextElement = head;
    head = newNode;
  }
  else{
    Node* newNode = new Node();
    Node* last = head;

    while(last->nextElement !=nullptr){
      last = last->nextElement;
    }

    newNode->data = value;
    newNode->nextElement = nullptr;
    last->nextElement = newNode;
  }

}
int main() {
  LinkedList list; // Linked List created
  for (int i = 1; i < 10; i++) {
    list.insertAtHead(i); // inserting data at head of the list
    list.printList();
  }
  return 0;
}