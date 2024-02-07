/*
Question 3: Power of Two
Write a program that takes an integer as input and returns true if the input is a power of two.
Examples: 
8=> returns true
6=> returns false */

#include <stdio.h>

int aPowerOfTwo(int num){
	
	while(num % 2 == 0){
		
		num /= 2 ;
	}
	 return num == 1;
}

int main() {
	
	int number;
 	
 	printf("Enter your number:");
 	scanf("%d", &number);
 	
 	if (aPowerOfTwo(number)){
		 printf("true");
	 }
	 else{
		 printf("false");
	 }
	 
	 return 0;
}

