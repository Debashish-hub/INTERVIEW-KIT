bool isCircular(struct Node *head){
    //code here
    if(head==NULL)return true;
    struct Node *curr = head;
    while(curr->next != NULL && curr->next != head){
        curr = curr->next;
        
    }
    if(curr->next == NULL){
            return false;
        }else{
            return true;
        }
}