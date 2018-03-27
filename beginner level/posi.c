#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	printf("Input: ");
	scanf("%d",&n);
	if(n<0)
	printf("Negative");
	if(n>0)
	printf("Positive");
	if(n==0)
	printf("Zero");
	return 0;
}
