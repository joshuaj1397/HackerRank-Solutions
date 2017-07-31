/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *n, *t;
    n = new Node;
    n->data = data;
    n->next = NULL;
    t = head;
    do {
        if (head == NULL) {
            head = n;
            break;
        }
        else if (t->next == NULL) {
            t->next = n;
            break;
        }
        else t = t->next;
    } while (true);
    return head;
}
