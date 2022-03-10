#include <stdio.h>
#include <stdlib.h>

/*
Primes are integers greater than one with no positive divisors besides one and itself. Negative numbers are excluded.
*/

main()
{
	int number, i, result = 0;

	printf("Insert number : ");
	scanf("%d", &number);
	result = number;

	for (i = 1; i < number; i++){
		if (number / i < number)
		{
			result--;
		}
	}	

	if (result == 2){
		printf("%d is a prime number\n", number);
	} else {
		printf("%d is not prime number\n", number);
	}

	system("pause");
	return 0;
}
