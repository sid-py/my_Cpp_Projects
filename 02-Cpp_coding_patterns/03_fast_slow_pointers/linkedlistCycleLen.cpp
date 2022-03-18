using namespace std;

#include <iostream>

class ListNode {
 public:
  int value = 0;
  ListNode *next;

  ListNode(int value) {
    this->value = value;
    next = nullptr;
  }
};

class LinkedListCycleLength {
 public:
  static int findCycleLength(ListNode *head) {
    // TODO: Write your code here
    ListNode *slow = head; // initialize slow ptr to head
    ListNode *fast = head; // initialize slow ptr to head

    while (fast != nullptr && fast->next != nullptr)
    {
        /* code */
        fast = fast->next->next; // MOving the fast ptr two steps ahead
        slow = slow->next; // moving the slow ptr one step ahead
        if(slow == fast) {
            return calculateLength(slow);
        }
    }
       
    return false;
  }


  private:
    static int calculateLength(ListNode *slow){
        ListNode *current = slow;
        int cycleLength = 0;
        do{
            current = current->next;
            cycleLength++;
        }while(current !=slow);
        return cycleLength;
    }
};

int main(int argc, char *argv[]) {
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);
  head->next->next->next->next->next = new ListNode(6);
  head->next->next->next->next->next->next = head->next->next;
  cout << "LinkedList cycle length: " << LinkedListCycleLength::findCycleLength(head) << endl;

  head->next->next->next->next->next->next = head->next->next->next;
  cout << "LinkedList cycle length: " << LinkedListCycleLength::findCycleLength(head) << endl;
}
