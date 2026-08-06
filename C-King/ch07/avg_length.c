#include <stdio.h>

int main(void){
	char ch;
	float count=0;
	float space=0;
	printf("Enter a sentence: ");
	ch=getchar();
	while(ch!='\n'){
		if(ch==' '){
			space++;
		}
		else{
			count++;
		}
		ch=getchar();
	}
	//printf("%f %f\n", (space), (count-1));
	printf("Average word length: %.1f\n", count/(space+1));
}


	
