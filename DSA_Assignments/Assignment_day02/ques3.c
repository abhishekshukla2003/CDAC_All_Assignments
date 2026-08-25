#include<stdio.h>

#define SIZE 5

int queue[SIZE];


int queue[SIZE];
int front =0;
int rear = 0;
int count =0;

void enqueue(int value)
{
	if(count == SIZE)
	{
		printf("Queue is full !\n");
		return;
	}
	queue[rear] = value;
	rear = (rear + 1)% SIZE;
	count++;
	printf("%d inserted\n",value);

}
void dequeue()
{
	if(count == 0)
	{
		printf("Queue is empty!\n");
		return;
	}
	printf("%d removed\n",queue[front]);
	front = (front +1)%SIZE;
	count--;

}
void display()
{
	if(count ==0)
	{
		printf("Queue is empty!\n");
		return;

	}
	printf("Queue: ");
	int i = front;
	for(int c = 0;c< count;c++)
	{
		printf("%d",queue[i]);
		i=(i+1)%SIZE;

	}
	printf("\n");

}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	display();

	dequeue();
	dequeue();
	display();

	enqueue(50);
	enqueue(60);
	enqueue(70);//now full
	display();

	dequeue();
	display();

	return 0;

}
