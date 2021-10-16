Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node *curr = head;
 while(curr != NULL && curr->next != NULL){
     if(curr->data == curr->next->data){
         Node *nex = curr->next;
         curr->next = nex->next;
         delete nex;
     }else{
        curr = curr->next;
     }
 }
 return head;
}