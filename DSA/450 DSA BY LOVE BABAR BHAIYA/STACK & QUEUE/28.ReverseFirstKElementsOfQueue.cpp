queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
   
   for(int i = 0; i<k;i++){
       s.push(q.front());
       q.pop();
   }
   while(s.empty() == false){
       q.push(s.top());
       s.pop();
   }
   for(int j =0; j <q.size() - k; j++){
       q.push(q.front());
       q.pop();
   }
   return q;
}