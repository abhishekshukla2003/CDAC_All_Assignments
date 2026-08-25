 #include<stdio.h>
   
   void print_hex_rec(int num){

   char hexDigits[]="0123456789ABCDEF";

   if (num ==0)
	return ;

	print_hex_rec(num/16);
	printf("%c",hexDigits[num % 16]);
}

int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);

	if(n==0){
		printf("Hexadecimal:0\n");

	}else{

		printf("Hexadecimal :");
		print_hex_rec(n);
		printf("\n");

}
return 0;
}
                                                                                                                                                                 
         
