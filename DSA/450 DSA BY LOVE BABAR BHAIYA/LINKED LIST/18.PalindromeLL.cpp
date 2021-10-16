Node* reverse(Node* slow)
   {
       Node* curr=slow;
       Node* next;
       Node* prev=NULL;
       while(curr!=NULL){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       return prev;
   }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *c1 = head, *c2 = reverse(slow);
        while(c2 != NULL){
            if(c1->data != c2->data){
                return false;
            }
            c1 = c1->next;
            c2 = c2->next;
        }
        return true;
    }