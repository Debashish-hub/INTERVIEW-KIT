stack<int> st1;
    stack<int> st2;
        
    MyQueue() {
       
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        st1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp;
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        temp = st2.top();
        st2.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return temp;
    }
    
    /** Get the front element. */
    int peek() {
        int temp;
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        temp = st2.top();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return temp;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(!st1.empty())
            return false;
        return true;
    }