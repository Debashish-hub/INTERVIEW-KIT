int getNthFromLast(struct Node *head, int n)
{
    struct Node *fast = head, *slow = head;
    for(int i=0; i<n-1; i++){
        fast = fast->next;
        if(fast == NULL)return -1;
    }
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow->data;
}