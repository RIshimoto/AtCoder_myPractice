#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;

	(void)argc;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d %d %d", a, b, c);
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
			printf("o");
		printf("\n");
	}
	return 0;
}
