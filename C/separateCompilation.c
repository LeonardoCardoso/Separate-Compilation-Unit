long long int fibonacci(int number){
	long long int temporary;
	int i;
	if(number == 0) temporary = 0;
	else if(number == 1 || number == 2) temporary = 1;
	else{
		long long int before = 1, beforeBefore = 1;
		for(i = 2; i < number; i++){
			temporary = beforeBefore + before;
			beforeBefore = before;
			before = temporary;
		}
	}
	return temporary;
}
