#include<stdio.h>

int isPrime(int number){
	int i;
	if(number == 1) return 0;
	if(number == 2) return 1;
	
	for(i = 2; i <= number/2; i++){
		if(number % i == 0)
			return 0;
	}
	
	return 1;
}

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	
	if(isPrime(n))
		printf("%d is PRIME \n", n);
	else
		printf("%d is NOT PRIME!!", n);
		
	return 0;
}
