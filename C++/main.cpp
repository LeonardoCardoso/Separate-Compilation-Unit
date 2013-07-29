#include <iostream>
#include "separateCompilation.h"

using namespace std;

int main(){
	int userNumber;
	fibonacci fib;
	long long int result;
	
	cout << "\nEnter a number to calculate its Fibonacci number: ";
	cin >> userNumber;
	result = fib.numberCalculus(userNumber);

	cout << "\n";
	if(result == -1) cout << "Invalid Number";
	else if(result < -1) cout << "Result overflows long long int: " << result;
	else cout << "Result is " << result;
	cout << "\n\n";

	return 0;
}

