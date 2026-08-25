#include<stdio.h>
#define SIZE 50

//stack implementation

int stack[SIZE];
int top = -1;

void push(int data)
{
    stack[++top] = data;
}
int pop()
{
    return stack[top--];
}

int main()
{
    int arr[] ={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    for(int i =0;i<n;i++)
    {
        push(arr[i]);
    }
    
    for(int i =0;i<n;i++)
    {
        arr[i] = pop();
    }
    
    printf("Reversed array: ");
    for(int i =0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}
