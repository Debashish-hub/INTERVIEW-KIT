void removeLoop(Node* head)
    {
        Node *slow = head, *fast = head; 
  
        while (fast!=NULL && fast->next!=NULL) { 
            slow = slow->next; 
            fast = fast->next->next; 
            if (slow == fast) { 
                break; 
            } 
        } 
        if(slow==head){
            while(slow->next!=head){
                slow=slow->next;
            }
            slow->next = NULL;
        }
        if(slow == fast){
            slow = head;
            while(slow->next != fast->next){
                if(slow == fast->next){
                    fast->next == NULL;
                }
                slow = slow->next;
                fast = fast->next;
            }
        
            fast->next=NULL;
        }
    }