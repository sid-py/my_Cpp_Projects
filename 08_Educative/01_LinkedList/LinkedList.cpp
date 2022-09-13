#include "LinkedList.h"

LinkedList::LinkedList(){
  head=nullptr;
} 

Node * LinkedList::getHead() {
  return head;
}

bool LinkedList::isEmpty(){
  if(head == nullptr) //Check whether the head points to null
    return true;
  else
    return false;
} 

bool LinkedList::printList() {        // Printing the list
  if (isEmpty()) {
    cout << "List is Empty!";
    return false;
  }
  Node *temp = head;        // starting from head node
  cout << "List : ";

  while (temp != nullptr) {     // traveresing through the List
    cout << temp->data << "->"  ;
    temp = temp->nextElement;    // moving on to the temp's nextElement
  }
  cout  << "null " << endl;    // printing null at the end
  return true;
}  