Node* divide(int N, Node *head){
        // code here
        Node *Es = NULL, *Ee, *Os = NULL, *Oe;
        while(head){
            if(head->data % 2 == 0){
                if(Es == NULL){
                    Es = head;
                    Ee = Es;
                }else{
                    Ee->next = head;
                    Ee = Ee->next;
                }
            }else{
                if(Os == NULL){
                    Os = head;
                    Oe = Os;
                }else{
                    Oe->next = head;
                    Oe = Oe->next;
                }
            }
            head = head->next;
        }
        if(Es == NULL)return Os;
        if(Os == NULL)return Es;
        Ee->next = Os;
        Oe->next = NULL;
        return Es;
    }