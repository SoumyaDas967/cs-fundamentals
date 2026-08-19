#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main(void){
	char s[1000];
	int i;
	printf("Enter a message: ");

	for (i=0; i<999; i++){
		scanf("%c", &s[i]);
		if (s[i]=='\n'){
			break;
		}
	}
	s[i]='\0';
	
	for (int i=0; i<strlen(s); i++){
		s[i]=toupper(s[i]);
	}

	for (int i=0; i<strlen(s); i++){
		switch(s[i]){
			case 'A':
				s[i]='4';
				break;
			case 'B':
				s[i]='8';
				break;
			case 'E':
				s[i]='3';
				break;
			case 'I':
				s[i]='1';
				break;
			case 'O':
				s[i]='0';
				break;
			case 'S':
				s[i]='5';
				break;
		}
	}
	
	printf("In B1FF speak: ");
	for (int i=0; i<strlen(s); i++){
		printf("%c", s[i]);
	}
	printf("!!!!!!!!!!");
	printf("\n");

}
		
