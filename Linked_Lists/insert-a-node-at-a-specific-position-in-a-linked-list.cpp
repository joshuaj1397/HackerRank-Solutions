/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *n, *t = head, *prev = NULL;
    int i = 0;
    n = new Node;
    n->data = data;
    do {
        if (head == NULL) {
            n->next = NULL;
            head = n;
            break;
        }
        else if (position == 0) {
            n->next = t;
            head = n;
            break;
        }
        else if (i == position) {
            prev->next = n;
            n->next = t;
            break;
        }
        prev = t;
        t = t->next;
        i++;
    } while (true);
    return head;
}
