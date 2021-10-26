void sortedInsert(struct stack** s, int x){
    if (isEmpty(*s) or x > top(*s)) {
        push(s, x);
        return;
    } 
    int temp = pop(s);
    sortedInsert(s, x);
    push(s, temp);
}
 
void sortStack(struct stack** s)
{
    if (!isEmpty(*s)) {
        int x = pop(s);
        sortStack(s);
        sortedInsert(s, x);
    }
}