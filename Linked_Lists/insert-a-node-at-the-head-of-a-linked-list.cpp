/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  Node *n, *t;
  n = new Node;
  n->data = data;
  if (head == NULL) {
      n->next = NULL;
  }
  else {
      t = head;
      n->next = t;
  }
  head = n;
  return head;
}
