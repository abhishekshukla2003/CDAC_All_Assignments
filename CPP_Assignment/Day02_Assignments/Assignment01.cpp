#include<stdio.h>


class employee
{
	private:
		int empID;
		char empName[20];
		double empsalary;
	public:
		void AcceptData(void){
			printf("Enter employee ID:\n");
			scanf("%d",&this->empID);
			printf("Enter employee Name:\n");
                        scanf("%s",&this->empName);
			printf("Enter employee Salary:\n");
                        scanf("%lu",&this->empsalary);


		}	
		void printData(void){
			printf("\n employee ID: %d\n Employee Name: %s\n Employeed salary: %lu\n",this->empID,this->empName,this->empsalary);
		}

};
int main()
{
	employee E1;
	E1.AcceptData();
	E1.printData();

	return 0;
}
