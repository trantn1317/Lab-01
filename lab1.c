/* Tri Tran
lab1
cs532
1/18/2023
*/
#include <stdio.h>

int main (int argc, char**argv){

int givenNumber, prime = 0;
printf("please enter a number:");
scanf("%d", &givenNumber);
/* prime is use to test the prime number, if it's never been moduled by any number beside 1 and itself (,
its a prime number */
for (int i = 2; i<givenNumber; i++)
{
if (givenNumber%i==0){prime++;}
}
if (prime==0) {printf("The given number is a prime number\n");}
	else printf("The given is NOT a prime number\n");
return 0;
}
