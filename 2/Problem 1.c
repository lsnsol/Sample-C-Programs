#include <stdio.h>
#include <conio.h>

int main()
{
	int i, n, sumL = 0, sumF = 0;
	printf("Enter the value of N: ");
	scanf("%d", &n);
	// by for loop
	for (i = 1; i <= n; i++)
	{
		sumL += i * i;
	}

	// by formulae [n(n+1)(2n+1)]/6
	sumF = (n * (n + 1) * (2 * n + 1)) / 6;

	printf("Sum of square of natural numberes till %d is %d (by for loop) and %d (by formulae)", n, sumL, sumF);
	return 1;
}
