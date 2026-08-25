#include<stdio.h>
#include<string.h>

struct bankaccount
{
	char name[20];
	int accnumber;
	char acctype[20];
	float balance;
};


	void AcceptData(struct bankaccount *acc)
	{
		printf("Enter Account holder name:");
		scanf("%s",acc->name);

		printf("Enter Account Number: ");
                scanf("%d",&acc->accnumber);

		printf("Enter Account Type(saving/loan/ppf/nps)) : ");
                scanf("%s",acc->acctype);

		printf("Enter initial  Balance(minimum %.2f): ",(float) 1000);
                scanf("%f",&acc->balance);


		if (acc->balance < 1000){
			printf("Initial balance too low! setting to minimum balance %.2f\n",(float) 1000);
			acc->balance = 1000;
		}

		printf("Account successfully created !\n");
	}
	void Deposit(struct bankaccount *acc)
	{
		float amount;
		printf("Enter amount to deposit: ");
		scanf("%f",&amount);

		if(amount <=0)
		{
			printf("Invalid deposit amount !\n");
			return ;
		}
		acc->balance += amount;
		printf("Amount deposited successfully!\n");
		printf("Update balance: %.2f\n",acc->balance);
		
	}
	void Withdraw(struct bankaccount *acc)

	{
		float amount ;
		printf("Enter amount to withdraw:");
		scanf("%f",&amount);

		if(amount <=0){
			printf("Invalid withdrawal amount !\n");
		return;
	}

	if(acc->balance - amount < 1000){
		printf("Insuffience balance !\n");
	}
	else
	{
		acc->balance -= amount;
		printf("amount withdrawn successfully !\n");
		printf("Update balance:%.2f\n",acc->balance);
	}
}
	void Display(struct bankaccount acc)

	{
		printf("\n=================ACCOUNT DETAILS=============\n");
		printf("Name                :%s\n", acc.name);
		printf("Account Number      :%d\n", acc.accnumber);
		printf("Account type        :%s\n", acc.acctype);
		printf("Balance             :%.2f\n",acc.balance);

	}
int main()
{
	struct bankaccount account;
	int choice;
	int exitflag =0;

	while(!exitflag)
	{
		printf("================Bank Account Menu================\n");
		printf("1. Accept account details\n");
		printf("2. Deposit amount \n");
		printf("3. withdraw amount \n");
		printf("4. Display account details\n");
		printf("5. Exit\n");
		printf("Enter your choice :\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				AcceptData(&account);
				break;
			case 2:
                                Deposit(&account);
                                break;
			case 3:
                                Withdraw(&account);
                                break;

			case 4:
                                Display(account);
                                break;
			case 5:
				exitflag =1;
				printf("Exiting program. Thank you !\n");
                                break;
			default:
                                printf("Invalid choice! please try again.\n");
                       	
		}
	
	}
	return 0;
}	
