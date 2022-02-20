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

class LinkedListCycleStart {
 public:
  static ListNode *findCycleStart(ListNode *head) {
    // TODO: Write your code here
    int cycleLength = 0;
    ListNode *slow {head};
    ListNode *fast {head};

    while (fast != nullptr && fast->next != nullptr)
    {
        /* code */
        fast = fast->next->next; // MOving the fast ptr two steps ahead
        slow = slow->next; // moving the slow ptr one step ahead
        if(slow == fast) {
            cycleLength = calculateLength(slow);
            break;
        }
    }
       
    return findStart(head, cycleLength);
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

    static ListNode *findStart(ListNode *head, int cycleLength){
        ListNode *pointer1 = head, *pointer2 = head;
        while(cycleLength > 0){
            pointer2 = pointer2->next;
            cycleLength--;        }
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
  cout << "LinkedList cycle start: " << LinkedListCycleStart::findCycleStart(head)->value << endl;

  head->next->next->next->next->next->next = head->next->next->next;
  cout << "LinkedList cycle start: " << LinkedListCycleStart::findCycleStart(head)->value << endl;

  head->next->next->next->next->next->next = head;
  cout << "LinkedList cycle start: " << LinkedListCycleStart::findCycleStart(head)->value << endl;
}
