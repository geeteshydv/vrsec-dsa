#include<bits/stdc++.h>
using namespace std;
struct Mystack
{
    int *arr;
    int cap;
    int top;
    Mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }
};

void push(int x)
{
    if(top==cap-1)
    return ;
    top++;
    arr[top]=x;
}


int pop()
{
    if(top==-1)
    return -1;
    int res=arr[top];
    top--;
    return res;
}

int top()
{
    if(top==-1) return -1;
    return arr[top];
}

int size()
{
    return top+1;
}

bool isEmpty()
{
   return (top==-1);
}