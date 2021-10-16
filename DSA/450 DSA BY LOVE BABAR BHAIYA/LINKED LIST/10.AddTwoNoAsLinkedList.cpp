Node *reverse(Node* head){
        Node* prev = NULL, *curr = head, *next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node *add(Node *first, Node *second){
        
        if(first == NULL) return second;
        if(second == NULL) return first;
        int sum = first->data + second->data;
        Node *temp = new Node(sum%10);
        temp->next = add(first->next, second->next);
        if(sum >= 10) {
            temp->next = add(temp->next, new Node(1));
        }
        return temp;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code 
        first = reverse(first);
        second = reverse(second);
        return reverse(add(first,second));
    }