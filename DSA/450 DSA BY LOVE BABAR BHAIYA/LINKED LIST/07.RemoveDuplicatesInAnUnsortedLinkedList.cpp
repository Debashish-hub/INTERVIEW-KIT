Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node *curr = head;
     set<int> s;
     s.insert(curr->data);
     while(curr && curr->next){
         if(s.find(curr->next->data) != s.end()){
             curr->next = curr->next->next;
         }else{
             curr = curr->next;
             s.insert(curr->data);
         }
     }
     return head;
    }