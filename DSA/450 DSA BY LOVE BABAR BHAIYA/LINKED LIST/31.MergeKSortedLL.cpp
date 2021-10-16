class MyComparator{
    public:
        int operator()(Node *a, Node *b){
            return b->data<a->data;
        }
};

Node * mergeKLists(Node *arr[], int N)
{
     priority_queue<Node *, vector<Node *>, MyComparator> q;
     
     for(int i=0;i<N;i++){
        if(arr[i]){
            q.push(arr[i]);
        }    
     }
     
     Node *dummy = (Node *)malloc(sizeof(Node));
     Node *tail = dummy;
     
     while(!q.empty()){
         Node *temp = q.top();
         q.pop();
         if(temp->next){
             q.push(temp->next);
         }
         
         tail->next = temp;
         tail = tail->next;
     }
     
     return dummy->next;
}