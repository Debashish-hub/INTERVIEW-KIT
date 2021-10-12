Node* reverseByN(Node* head, int k)
{
    if (!head)
        return NULL;
    head->prev = NULL;
    Node *temp, *curr = head, *newHead;
    int count = 0;
    while (curr != NULL && count < k) {
        newHead = curr;
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
        count++;
    }
    if (count >= k) {
        Node* rest = reverseByN(curr, k);
        head->next = rest;
        if (rest != NULL)
            rest->prev = head;
    }
    return newHead;
}