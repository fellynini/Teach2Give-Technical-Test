/*Question 6: Count Vowels
Write a program that counts the number of vowels in a sentence.
eg " Hello World " => returns 2 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(const char *sentence){
	
	int vowels = 0;
	int sentLength = strlen(sentence);
	
	for(int i = 0; i <sentLength; i++){
		
		char c = tolower(sentence[i]);
		
		if(c == 'a' || c == 'e' || c == '0' || c == 'u'){
			vowels++;
		}
	}
	
	return vowels;
}

int main(){
	char sentence[99];
	
	printf("Write down a sentence: ");
	fgets(sentence,sizeof(sentence), stdin);
	
	int vowels = countvowels(sentence);
	printf("The number of vowels in your sentence are: %d \n",vowels);
	
	return 0;
}