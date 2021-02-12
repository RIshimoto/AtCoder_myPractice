#include <stdio.h>
#include <stdlib.h>

int main(void){
	printf("100000\n");
	for (int i = 1; i <= 100000; i++)
		printf("%d ", rand() % 100000000 + 3);
	printf("\n");
}
