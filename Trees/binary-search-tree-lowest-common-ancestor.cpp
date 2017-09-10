/*
Node is defined as

typedef struct node
{
   int data;
   node *left;
   node *right;
}node;

*/

node *lca(node *root, int v1,int v2)
{
    node *next = root;
    while (true) {
        if (next->data == v1 || next->data == v2) return next;
        if (next->data > v1 && next->data > v2) {
            next = next->left;
        }
        else if (next->data < v1 && next->data < v2) {
            next = next->right;
        }
        else return next;
    }
}
