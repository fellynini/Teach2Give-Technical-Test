/*Question 5: Reverse Integer
Write a program that takes an integer as input and returns an integer with reversed digit 
ordering.
Examples:
For input 500, the program should return 5.
For input -56, the program should return -65.
For input -90, the program should return -9.
For input 91, the program should return 19. */

#include <stdio.h>

int reversedIntergers(int num){
	
	int reversedNum = 0;
	int sign = 0;
	
	if (num < 0){
		sign = -1;
		num= -num;
		
	}
	while(num> 0){
		int remainder = num % 10;
		reversedNum = reversedNum * 10 + remainder;
		num /=10;
	}
	 
	 return reversedNum * sign;
}

int main(){
	int num;
	printf("Enter your integer: ");
	scanf("%d",&num);
	int reversed = reversedIntergers(num);
	printf("Your reversed integer is : %d", reversed);
	
	return 0;
	
}