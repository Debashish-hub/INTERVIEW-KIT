queue<int> a;
    queue<int> b;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        b.push(x);
        while(!a.empty()){
            b.push(a.front());
            a.pop();
        }
        swap(a,b);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x = a.front();
        a.pop();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        return a.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return a.empty();
    }

////////////////////////////////////////////////////////////////////////////////////////////


    queue<int> q;
    void push(int x) {
        q.push(x);
        for (int i=1; i<q.size(); i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        q.pop();
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }