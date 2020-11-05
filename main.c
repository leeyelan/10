#include <stdio.h>
#include <stdlib.h>


	
int main(void){
	
	int i;
	int grade[5];

	int sum = 0;
	
	int *ptr;

	

	
	
	for(i=0; i<5; i++)
	{
		ptr = &grade[i];
		printf("grade[%i]=", i);
		scanf("%d", ptr);
		}	
	
	ptr = grade;
	
 	for(i=0; i<5; i++)
	{
		ptr = &grade[i];
		sum += *ptr;
		printf("grade[%d]= %d\n",i, *ptr);
       }

	printf("average = %i\n", sum/5);
	
	return 0;
}
