void printLeaves(struct node* root){
	if (root == NULL)
		return;
	printLeaves(root->left);
	if (!(root->left) && !(root->right))
		printf("%d ", root->data);
	printLeaves(root->right);
}
void printBoundaryLeft(struct node* root){
	if (root == NULL)
		return;
	if (root->left) {
		printf("%d ", root->data);
		printBoundaryLeft(root->left);
	}else if (root->right) {
		printf("%d ", root->data);
		printBoundaryLeft(root->right);
	}
}
void printBoundaryRight(struct node* root){
	if (root == NULL)
		return;
	if (root->right) {
		printBoundaryRight(root->right);
		printf("%d ", root->data);
	}
	else if (root->left) {
		printBoundaryRight(root->left);
		printf("%d ", root->data);
	}
}
void printBoundary(struct node* root){
	if (root == NULL)
		return;
	printf("%d ", root->data);
	printBoundaryLeft(root->left);
	printLeaves(root->left);
	printLeaves(root->right);
	printBoundaryRight(root->right);
}