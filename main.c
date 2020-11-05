#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i = 10;
	char c = 69;
	float f = 12.3;
	
	printf("i : %i %p\n", i, &i);
		printf("i : %c %p\n", c, &c);
			printf("i : %f %p\n", f, &f);
			
			return 0;
}
