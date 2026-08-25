#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>

//thread1 ----print "SUNBEAM\n"
//thread2 -----print "INFOTECH\n"


sem_t s;//declare sema globally---qaccessiblee to incr & decr thread

void *sunbeam(void *param)
{
	char *str="SUNBEAM\n";
	int i;
	for(i =0 ;str[i] !='\0';i++)
	{
		putchar(str[i]);
		fflush(stdout);
		sleep(1);
	}
	sem_post(&s); //V(s);
	return NULL;
}

void *infotech(void *param)
{
	char *str ="INFOTECH\n";
	int i;
	sem_wait(&s); //P(s);

	for(int i= 0;str[i]!='\0';i++)
	{
		putchar(str[i]);
		fflush(stdout);
		sleep(1);
	}
	return NULL;
}

int  main()
{
	pthread_t st,it;

	//create sema with initial val 1
	
	sem_init(&s,0,0);
	pthread_create(&st, NULL, sunbeam, NULL);
	pthread_create(&it, NULL,infotech, NULL);
	pthread_join(st, NULL);
	pthread_join(it, NULL);

	//sema destr
	sem_destroy(&s);

	printf("bye\n");
	return 0;

}
