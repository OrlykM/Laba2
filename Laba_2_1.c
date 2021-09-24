#include <stdio.h> 
int main()
{
	int i;
	int sum = 0;
	for (i = 1; i < 200; i += 2)
	{
		sum += i;
	}
	printf("Result %d", sum);
	return 0;
}