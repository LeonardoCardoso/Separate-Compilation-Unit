#include <stdio.h>
#include "separateCompilation.h"

int main(){
	int userNumber;
	long long int result;
	printf("\n");
	printf("Enter a number to calculate its Fibonacci number: ");
	scanf("%i", &userNumber);
	result = fibonacci(userNumber);

	printf("\n");
	if(result == -1) printf("Invalid number");
	else if(result < -1) printf("Result overflows long long int: %lld", result);
	else printf("Result is %lld", result);
	printf("\n\n");
	return 0;
}

