void convert(Node *root, Node **head){
        if(root == NULL)
            return;
        convert(root->right, head);
        root->right = *head;
        if (*head != NULL)
            (*head)->left = root;
        *head = root;
        convert(root->left, head);
    }
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // your code here
        Node *head = NULL;
        convert(root, &head);
        return head;
    }