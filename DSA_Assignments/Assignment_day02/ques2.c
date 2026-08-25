#include<stdio.h>

#define SIZE 5

int queue[SIZE];
int front =0;
int rear =0;

void enqueue(int value)
{
	if(rear == SIZE)
	{
		printf("Queue is full ! \n");
		return ;
		}
		queue[rear] = value;
		rear++;
		printf("%d inserted \n",value);
}
void dequeue()
{
	if(front == rear)
	{
		printf("Queue is empty! \n");
		return;
		}
	printf("%d removed \n",queue[front]);

	for(int i =front;i<rear -1;i++)
	{
		queue[i] = queue[i+1];
	}
	rear--;
}

void display()
{
	if(front == rear)
	{
		printf("Queue is empty!\n");
		return ;
		}
	printf("Queue: ");
	for(int i= front;i < rear; i++)
	{
		printf("%d",queue[i]);

	}
	printf(" \n");


	}

int main()

{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();

	dequeue();
	display();

	enqueue(40);
	display();

	enqueue(40);
	enqueue(50);
	enqueue(60);
	display();

	return 0;

}
