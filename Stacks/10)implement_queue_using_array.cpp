Solution 1-:

Intillay both front and rear at 0

front=0;
rear=0;

Code-:
void MyQueue :: push(int x)
{

        arr[rear]=x;
        rear++;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    if(front==rear)
    return -1;
    int res=arr[front];
    front++;
    return res;
}