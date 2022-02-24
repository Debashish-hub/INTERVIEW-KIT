queue<int> rev(queue<int> q)
{
   // add code here.
   deque<int>d;
   int i=0;
   while(i<q.size()){
       d.push_front(q.front());
       q.pop();
   }
   for(auto it = d.begin(); it!=d.end(); it++){
       q.push(*it);
   }
   return q;
}