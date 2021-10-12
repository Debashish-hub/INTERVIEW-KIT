node* newNode(int data){
	node* temp = new node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
node* constructTreeUtil(int pre[], int* preIndex, int key, int min, int max, int size){
	if (*preIndex >= size)
		return NULL;
	node* root = NULL;
	if (key > min && key < max) {
		root = newNode(key);
		*preIndex = *preIndex + 1;
		if (*preIndex < size) {
			root->left = constructTreeUtil(pre, preIndex,pre[*preIndex], min, key, size);
		}
		if (*preIndex < size) {
			root->right = constructTreeUtil(pre, preIndex,pre[*preIndex], key, max, size);
		}
	}
	return root;
}

