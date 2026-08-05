#include <stdio.h>

int main(void){
	double fact=1;
	double sum=1;
	int n;

	printf("Enter a value of n: ");
	scanf("%d", &n);

	if (n<=0){
		printf("Error!\n");
		return 1;
	}

	for(int i=1;i<=n;i++){
		fact=fact*i;
		sum=sum+(1.0/fact);
	}

	printf("The value of e is: %.15f\n", sum);
}

