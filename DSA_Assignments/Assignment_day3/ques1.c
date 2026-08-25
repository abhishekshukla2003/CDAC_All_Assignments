#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = SIZE; 
int is_full()
{
    return top ==0;
}


int is_empty()
{
    return top == SIZE;
}


void push(int data){
    if(is_full())
    {
        printf("Stack Overflow!\n");
        return;
    }
    top--;
    stack[top] = data;
    printf("pushed %d\n",data);
}


int pop()
{
    if(is_empty())
    {
        printf("Stack Underflow! \n");
        return -1;
    }
    int value = stack[top];
    top++; //move top upward
    return value;
}
int main()
{
    push(10);
    push(20);
    push(30);

    printf("Popped: %d\n",pop());
    printf("popped: %d\n",pop());

    return 0;
}
