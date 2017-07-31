/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *t, *prev = NULL;
    int i = 0;
    t = head;
    do {
        if (position == 0) {
            head = t->next;
            break;
        }
        else if (i == position) {
            prev->next = t->next;
            break;
        }
        else {
            prev = t;
            t = t->next;
            i++;
        }
    } while (true);
    return head;
}
