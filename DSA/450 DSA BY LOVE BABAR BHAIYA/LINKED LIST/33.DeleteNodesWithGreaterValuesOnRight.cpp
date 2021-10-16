Node *compute(Node *head)
    {
        // your code goes here
        if(head == NULL)return NULL;
        Node *temp = compute(head->next);
        if(temp!=NULL && temp->data > head->data){
            *head = *head->next;
            return temp;
        }
        return head;
    }