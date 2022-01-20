int largestBSTUtil(Node* node, int *min_ref, int *max_ref,  int *max_size_ref, bool *is_bst_ref)
{
 
    /* Base Case */
    if (node == NULL)
    {
        *is_bst_ref = 1; 
        return 0;
    }
     
    int min = INT_MAX;
    bool left_flag = false;
    bool right_flag = false;
     
    int ls, rs; 
    *max_ref = INT_MIN;
    ls = largestBSTUtil(node->left, min_ref, max_ref, max_size_ref, is_bst_ref);
    if (*is_bst_ref == 1 && node->data > *max_ref)
        left_flag = true;
    min = *min_ref;
    *min_ref = INT_MAX;
    rs = largestBSTUtil(node->right, min_ref,  max_ref, max_size_ref, is_bst_ref);
    if (*is_bst_ref == 1 && node->data < *min_ref)
        right_flag = true;
    if (min < *min_ref)
        *min_ref = min;
    if (node->data < *min_ref) 
        *min_ref = node->data;
    if (node->data > *max_ref)
        *max_ref = node->data;
    if(left_flag && right_flag)
    {
        if (ls + rs + 1 > *max_size_ref)
            *max_size_ref = ls + rs + 1;
        return ls + rs + 1;
    }
    else
    {
        *is_bst_ref = 0;
        return 0;
    }
}
    int largestBst(Node *root)
    {
    	//Your code here
    	int min = INT_MAX; // For minimum value in right subtree
        int max = INT_MIN; // For maximum value in left subtree
         
        int max_size = 0; // For size of the largest BST
        bool is_bst = 0;
         
        largestBSTUtil(root, &min, &max, &max_size, &is_bst);
         
        return max_size;
    }