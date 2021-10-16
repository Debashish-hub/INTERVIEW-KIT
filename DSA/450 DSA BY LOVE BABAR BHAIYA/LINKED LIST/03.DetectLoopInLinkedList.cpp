bool detectLoop(Node* head)
    {
        // your code here
        Node *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }