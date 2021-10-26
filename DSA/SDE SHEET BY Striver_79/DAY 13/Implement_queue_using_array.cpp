void MyQueue :: push(int x)
{
        // Your Code
        arr[rear] = x;
        rear++;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code  
        if(front == rear){
            front = rear = 0;
            return -1;
        }
        int a = arr[front];
        front++;
        return a;
}
