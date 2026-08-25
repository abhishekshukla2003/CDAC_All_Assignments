#include<stdio.h>

class complex{
	private:
		float real;
		float imaginary;

	public:
		complex(){      //parameterless construct
			real =0;
			imaginary =0;
		}
		//parameterized contructor
		complex(float r, float i){
			real =r;
			imaginary =i;
		
		}

		void acceptcomplex()
		{
			printf("enter real part :\n");
			scanf("%f",&real);
			printf("enter imaginary part\n");
			scanf("%f",&imaginary);
		
		}
		void printcomplex(){
			printf("%.2f",real);
			if(imaginary >= 0)
				printf("+j%.2f\n",imaginary);
			else
				printf("-j%.2f\n",-imaginary);
		
		
		}

};

int main()
{
	complex c1;           //parameterles contructor

	complex c2(4,7);          //parameterized constructor
	
	printf("Default complex number:\n");
	c1.printcomplex();

	printf("Parametrized complex number:\n");
        c2.printcomplex();

	printf("\nEnter a new  complex number:\n");
        c1.acceptcomplex();

	printf("You entered :\n");
	c1.printcomplex();

	return 0;
}
