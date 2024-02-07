
// Question 2: Fibonacci Sequence
// Write a program to generate the Fibonacci sequence up to 100.

#include <stdio.h>


int main() {
    int num1 = 0 ;
    int num2 = 1 ;
    int nextnum;

    printf("A Fibonacci sequence for 1 to 100: \n");
    printf("%d, %d", num1,num2);

    nextnum = num1 + num2;

    while (nextnum <=100)
    {
        printf("%d,", nextnum);
        num1 = num2;
        num2 = nextnum;
        nextnum = num1 + num2 ;
    }
    

return 0;
}
