
#include <stdio.h>
#define size10
int stack[6]={10,30,40,50,60,70};
int top=-1;

isempty()
{
    if (top==-1)
    printf("stack is empty");
}

int peek()
{
    return (stack[top]);
}
void push(int val)
{
    if(top==(size-1))
    printf("overflow");
    else{
        top=top+1;
        stack[top]=val;
    }
}
int pop()
{
    int val;
    if(top==-1)
    printf("overflow");
    else{
        int =(stack[top]);
        top=top-1;
    }
    return (val);
}
int main()
{
    isempty();
    peek();
    push(20);
    pop(30);

    return 0;
}
