#include <stdio.h> 
#include <limits.h>

int main(void){
	int round;
	double number,frac;
	printf("Enter a number: ");
	scanf("%lf", &number);

	if(number>=(double)INT_MAX+1 || number<=(double)INT_MIN-1){
		printf("Out of range\n");
		return -1;
	}
	else{
		printf("%d\n", (int)number);
	}

	if (number < 0){
		frac=-(number - (int)number);
	}
	else{
		frac=number-(int)number;
	}
	
	if(frac>=0.5){
		if(number>=0){
			if((int)number==INT_MAX){
				printf("Out of range!\n");
				return -1;
			}
			else{
				round=(int)number+1;
			}
		}
		else{
			if((int)number==INT_MIN){
				printf("Out of range!\n");
				return -1;
			}
			else{
				round=(int)number-1;
			}
		}
	}
	else{
		round=(int)number;
	}
	printf("%d\n", round);
}

