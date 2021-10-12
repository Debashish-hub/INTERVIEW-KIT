struct node *reverse (struct node *head, int k)
    { 
        node * prev = NULL;
        node * curr = head;
        node * a;
        int c = k;
        while(c-- && curr != NULL){
            a = curr->next;
            curr->next = prev;
            prev = curr;
            curr = a;
        }
        if(head != NULL){
            head->next = reverse(a,k);
        }
        return prev;
    }