#include<stdio.h>

int calculator(int oprd1,int oprd2 , char operator_char,int oprt1, int *flag)
{
 *flag =0;

	switch (operator_char){
		case '+':
			return oprd1 +oprd2;
		case '-':
			return oprd1- oprd2;
		case '*':
			return oprd1 * oprd2;

		case '/':
			if (oprd2 != 0){

				return oprd1/oprd2; 
			}
			else{
				fprintf(stderr," Error:division by zero not allowed\n");
				*flag =1;
				return 0;
			}
			   
        default:
            fprintf(stderr, "Error: Invalid operator '%c'.\n", operator_char);
           *flag = 1; // Set error flag
            return 0;
	}
}



int main(){
int num1 =10;
int num2= 3;
char op='/';
int error =0;

int  result = calculator(num1,num2,op,&error);
if (error == 0) {
        printf("Result: %d\n", result);
    }
	return 0;
}
