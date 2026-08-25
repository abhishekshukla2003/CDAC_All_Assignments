#include<stdio.h>


struct student{
	int rollno;
	char name[20];
	float marks;

};


int main(void)

{
	struct student s1 = {12 , "abc",95.0f};
	//structure initialisation ....here sequence of the element is important.

	printf("Name = %d\n",s1.rollno);
	printf("Rollno = %s\n",s1.name);
	printf("Marks = %f\n",s1.marks);

	struct student s2={
		.name = "pqr",
		.rollno = 13,
		.marks = 50.5f
	};
	printf("s2 = %d %s %f\n",s2.rollno,s2.name,s2.marks);

	return 0;

}
