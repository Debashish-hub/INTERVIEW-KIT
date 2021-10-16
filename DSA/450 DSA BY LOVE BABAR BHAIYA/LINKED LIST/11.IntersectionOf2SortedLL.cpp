Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *head = new Node(0);
    Node *curr = head;
    while(head1 != NULL && head2 != NULL){
        if(head1->data == head2->data ){
            Node *temp = new Node(head1->data);
            curr->next = temp;
            curr = curr->next;
            head1 = head1->next;
            head2 = head2->next;
        }else if(head1->data > head2->data){
            head2 = head2->next;
        }else{
            head1 = head1->next;
        }
    }
    curr->next  = NULL;
    return head->next;
}