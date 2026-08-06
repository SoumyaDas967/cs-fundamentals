#include <stdio.h>
#include <ctype.h>

int main(void){
	int count=0;
	char ch;
	
	printf("Enter a statement: ");
	ch=getchar();
	
	while(ch!='\n'){
		switch(tolower(ch)){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				count++;
				break;
			default:
				break;
			}
		ch=getchar();
	}
	printf("Your sentence contains %d vowels\n", count);
}

			

