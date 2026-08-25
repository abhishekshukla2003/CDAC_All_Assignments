#include<stdio.h>


typedef struct{
	int rollno;
	char name[20];
	float marks;

}Student;


void accept_students(Student arr[],int n){

	for(int i=0 ; i<n; i++){
		printf("\nEnter details for student %d:\n",i+1);

		printf("Enter roll number :");
		scanf("%d",&arr[i].rollno);


		printf("Enter name :");

		scanf("%49s",arr[i].name);

		printf("Enter marks :");
		scanf("%f" ,&arr[i].marks);
		
	}
}

void print_students(Student arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nStudent %d:\n",i+1);
		printf("Roll number :%d\n",arr[i].rollno);
		printf("Name    :%s\n",arr[i].name);
		printf("Marks    :%.2f\n",arr[i].marks);
	}
}


int main(){
	int n;

	printf("Enter number of students: ");
	scanf("%d",&n);

	Student students[n];

	accept_students(students,n);
	print_students(students,n);

	return 0;
}
