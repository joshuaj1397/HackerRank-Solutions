#include <iostream>
#include <unordered_set>


bool has_cycle(Node* head) {
    if (head == NULL) return false;
    int i = 0;
    unordered_set <Node*> list;
    do {
        list.insert(head);
        if (head-> next == NULL) return false;
        head = head->next;
        i++;
    } while (list.size() == i);
    return true;
}
