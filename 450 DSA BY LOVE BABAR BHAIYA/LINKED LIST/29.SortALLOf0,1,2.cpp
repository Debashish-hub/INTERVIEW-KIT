Node* segregate(Node *head) {
        
        // Add code here
        int c0 = 0, c1 = 0, c2 = 0;
        Node *curr = head;
        while(curr != NULL){
            if(curr->data == 0){
                c0++;
            }else if(curr->data == 1){
                c1++;
            }else{
                c2++;
            }
            curr = curr->next;
        }
        curr = head;
        while(c0 > 0){
            curr->data = 0;
            curr = curr->next;
            c0--;
        }
        while(c1 > 0){
            curr->data = 1;
            curr = curr->next;
            c1--;
        }
        while(c2 > 0){
            curr->data = 2;
            curr = curr->next;
            c2--;
        }
        return head;
        
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Node* segregate(Node *head) {
    
              // Add code here
        if (!head || !(head->next))
            return head;
      
        Node* zeroD = new Node(0); 
        Node* oneD = new Node(0); 
        Node* twoD = new Node(0); 
      
        Node* zero = zeroD, *one = oneD, *two = twoD; 
      
        Node* curr = head; 
        while (curr) { 
            
            if (curr->data == 0) { 
                zero->next = curr; 
                zero = zero->next; 
                curr = curr->next; 
            }
            else if (curr->data == 1) { 
                one->next = curr; 
                one = one->next; 
                curr = curr->next; 
            } 
            else { 
                two->next = curr; 
                two = two->next; 
                curr = curr->next; 
            } 
        } 
      
        zero->next = (oneD->next) ? (oneD->next) : (twoD->next); 
        one->next = twoD->next; 
        two->next = NULL; 
      
        head = zeroD->next; 
      
        delete zeroD; 
        delete oneD; 
        delete twoD; 
      
        return head;
    }