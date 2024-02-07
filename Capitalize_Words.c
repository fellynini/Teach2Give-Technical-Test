/*Question 4: Capitalize Words
Write a program that accepts a string as input, capitalizes the first letter of each word in the 
string, and then returns the result string.
Examples: 
"hi"=> returns "Hi"
"i love programming"=> returns "I Love Programming" */

#include <stdio.h>


void capitalize(char *wrd){
	int capital = 1;
	
	while (*wrd){
		if (isspace(*wrd)){
			capitalize = 1;
		}
	}
	wrd++;
}

int main(){
	char wrd[99];
	printf("Enter a string: ");
	fgets(wrd, sizeof(wrd),stdin);
	
	capitalize(wrd);
	
	printf("%s", str);
	
	return 0;
	
}