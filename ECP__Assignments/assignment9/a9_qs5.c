#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[40];
	float marks;
}stud_t;
void write(stud_t *s)
{
	FILE *fp = NULL;
	fp = fopen("student.txt","w");
	fprintf(fp,"%d %s %f\n",s->rollno,s->name,s->marks);
	fclose(fp);
}
void read()
{
	stud_t s1;
	FILE *fp = fopen("student.txt","r");
	fscanf(fp,"%d %s %f",&s1.rollno,s1.name,&s1.marks);
	fclose(fp);

}


int main()
{
	stud_t s1;
	printf("Enter the student details\n");
	printf("Rollno: ");
	scanf("%d",&s1.rollno);
	printf("Name: ");
	scanf("%*c%c",s1.name);
	printf("marks: ");
	scanf("%f",&s1.marks);

	write(&s1);
	read(&s1);

	return 0;
}

