#include<stdio.h>

typedef struct student{
	int rollno;
	char name[20];
	int std;
	union result
	{
		char grade;
		float percentage;

	}result;

}stud_t;


void accept_details(stud_t *st);
void print_details(const stud_t *st);

int main(void)
{

	     stud_t st;
	
		printf("sizeof(stud_t)= %ld\n",sizeof(stud_t));
		
		accept_details(&st);
 		print_details(&st);

	return 0;
}

void accept_details(stud_t *st){
	printf("Enter student info (rollno , name, std ):\n");
	scanf("%d %s %d",&st->rollno,st->name,&st->std);
	if(st->std<5)
	{
		printf("Enter grade :\n");
		scanf("%*c%c",&st->result.grade);

	}else 
	{
		printf("enter percentage :");
		scanf("%f",&st->result.percentage);

	}
}

void print_details(const stud_t *st)
{
	printf("Rollno : %d\n ",st->rollno);

	printf("Name : %s\n",st->name);

	printf("standard :%d\n ",st->std);
	if (st->std<5)
	{
		printf("Grade :%c\n",st->result.grade);

	}
	else 
	{
		printf("Percentage :%f\n",st->result.percentage);
	}


}
