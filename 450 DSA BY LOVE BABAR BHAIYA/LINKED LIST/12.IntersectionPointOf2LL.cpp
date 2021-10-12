int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *a = head1, *b = head2;
    while(a != b){
        if(a == NULL){
            a = head2;
        }
        if(b == NULL){
            b = head1;
        }
        a = a->next;
        b = b->next;
    }
    return a->data;
}