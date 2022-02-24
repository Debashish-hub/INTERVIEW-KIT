void StackQueue :: push(int x)
{
    s1.push(x);
}

int StackQueue :: pop()
{
    int front;
    if(s1.empty() && s2.empty())
        return -1;
    else
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        
        front = s2.top();
        s2.pop();
        
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return front;
    }
}
