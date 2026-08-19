#include <stdio.h>

int main(void){
	int number;
	int digit_count[10]={0};
	printf("Enter a number: ");
	scanf("%d", &number);

	while(number!=0){
		int digit=number%10;
		digit_count[digit]++;
		number/=10;
	}

	printf("Digit:          ");
	for(int i=0; i<10; i++){
		printf("%d ", i);
	}
	printf("\n");

	printf("Occurences:     ");
	for (int i=0; i<10; i++){
		printf("%d ", digit_count[i]);
	}
	printf("\n");
}

