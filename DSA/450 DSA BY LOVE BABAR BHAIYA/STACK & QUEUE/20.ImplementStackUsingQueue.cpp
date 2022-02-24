void QueueStack :: push(int x)
{
       // Your Code
       q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
       // Your Code
       int res=-1;
       
       if(q1.empty()==true)return -1;
       
       while(q1.size()>1)
       {
             int top=q1.front();
             q1.pop();
             q2.push(top);
             
       }
       
       if(q1.size()==1)
       {
            res=q1.front();
            q1.pop();
            swap(q1,q2);
       }
       
       return res;
}