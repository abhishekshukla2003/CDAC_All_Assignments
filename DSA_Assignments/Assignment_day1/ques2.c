#include<stdio.h>
#include<string.h>

#define MAX 5

struct Employee {
	int empId;
	char name[30];
};

void searchbyId(struct Employee emp[], int n, int id)
{
	for(int i=0;i<n;i++)
		if(emp[i].empId == id)
		{
			printf("\nEmployee found:\n");
			printf("ID: %d\nName: %s\n",emp[i].empId,emp[i].name);
			return ;//stop after finding
		}
		printf("\nEmployee with ID %d not found!\n",id);
}

void searchByName(struct Employees emp[],int n, char key[])
{
	for(int i=0;i<n;i++)
		if(strcmp(emp[i].name,key)==0){
			printf("\nEmployee found:\n");
			printf("ID: %d \n Name: %s\n",emp[i].empId,emp[i].name);
			return;
			}

	printf("\n Employees with name %s not found !\n",key);
}

int main()
{
	struct Employee emp[MAX];

	
	printf("Enter details of %d emplyees:\n",MAX);
	for(int i =0;i<MAX;i++)
	{
		printf("\nEmplyee %d\n",i+1);
		printf("Enter ID: ");
		scanf("%d",&emp[i].empId);
		printf("Enter Name: ");
		scanf("%s",emp[i].name);
	}
	int id;
	char name[30];

	//Search by ID
	printf("\n Enter Employee ID to search:");
	scanf("%d",&id);
	searchbyId(emp,MAX,name);

	printf("\nENter EMployee Name to search:");
	scanf("%s",name);
	searchByName(emp,MAX,name);

	return 0;

}
