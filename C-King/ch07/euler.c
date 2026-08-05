#include <stdio.h>

int main(void){
	double fact=1.0;
	double sum=1.0;
	double epsilon;
	int i=1;

	printf("Enter a value of epsilon: ");
	scanf("%lf", &epsilon);

	if (epsilon <= 0){
		printf("Error!\n");
		return 1;
	}
	while(1.0/fact>=epsilon){
		sum=sum+(1.0/fact);
		i++;
		fact=fact*i;
	}

	printf("The value of e is: %.15f\n", sum);
}

