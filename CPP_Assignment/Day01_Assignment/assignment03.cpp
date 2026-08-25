#include<stdio.h>
#include<string.h>

struct Employee{
	int empID;
	char empName[20];
	double empSalary;
	
	void AcceptData()
	{
		printf("Enter Employee ID:");
		scanf("%d",&emp->empID);

		printf("Enter employee name :");
		scanf("%s",&emp->empName);

		printf("Enter employess Salary :");
		scanf("%lu",&emp->empSalary);
	
	}
	void PrintData(struct Employee emp)
	{
		printf("Employee Details :\n");
	        printf("ID :",emp.empID);
	        printf("Name :",emp.empName);
		 printf("Salary :",emp.empSalary);
	
	}

};

int main()
{
	struct Employee emp;
	AcceptData(&emp);
	PrintData(emp);

	return 0;
}
