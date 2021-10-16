struct Node* reverseDLL(struct Node * head)
{
    struct Node *curr = head, *pre = NULL, *nex;
    while(curr){
        nex = curr->next;
        curr->next = pre;
        curr->prev = nex;
        pre = curr;
        curr = nex;
    }
    return pre;
}