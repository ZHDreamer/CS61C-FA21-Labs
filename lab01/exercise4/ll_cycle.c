#include <stddef.h>

#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* DONE: Implement ll_has_cycle */
    if (head == NULL) {
        return 0;
    }
    struct node *fast = head, *slow = head;

    while (1) {
        for (int i = 0; i < 2; i++) {
            if (fast->next != NULL) {
                fast = fast->next;
            } else {
                return 0;
            }
        }
        slow = slow->next;
        if (slow == fast) {
            return 1;
        }
    }
}
