 #include<stdio.h>
   
   
int nextfibonacci(){
  
   static int next=1,num=0;

	  int n1 =num;
     int temp = num+next;
      num =next;
      next=temp;

	  return n1;
}
 
 int main()
 
 {
      int res;

	  printf("Enter the number of terms:\n");
	  scanf("%d",&res);
      printf("Fibonacci series :\n");
      for (int i=0;res<i;i++)

	  {

		printf("%d",nextfibonacci());
	  }
	  printf("\n");
    
     return 0;
 } 

