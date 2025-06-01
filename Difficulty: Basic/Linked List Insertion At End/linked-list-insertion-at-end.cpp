/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *temp, *ptr;
        temp = (struct Node*)malloc(sizeof(Node));
        if(temp != NULL){
            temp->data = x;
            temp->next = NULL;
            if(head == NULL){
                head = temp;
                return head;
            }
            ptr = head;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
        return head;
    }
};