#include<stdio.h>
#include<string.h>

struct student{
	int rollno;
	char name[20];
	float marks;
};

 struct student stud_t;

int main(void)
{
	

	printf("enter your  name:\n");
	scanf("%s",&stud_t.name);

	printf("Enter roll no:\n");
	scanf("%d",&stud_t.rollno);

	printf("enter marks :\n");
	scanf("%f",&stud_t.marks);

	printf("Name :%s\n",stud_t.name);

	printf("Roll no %d\n:",stud_t.rollno);
	printf("Marks :%f\n",stud_t.marks);


	return 0;
}
