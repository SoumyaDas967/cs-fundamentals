#include <stdio.h> 

int main(void){
	char ch;
	int count=0;
	printf("Enter a message: ");
	while(ch!='\n'){
		ch=getchar();
		count++;
	}
	printf("Your message was %d character(s) long.\n", (count-1));
}

