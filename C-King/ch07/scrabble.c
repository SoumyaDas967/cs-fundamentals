#include <stdio.h>
#include <ctype.h>

int main(void){
	int count=0;
	char ch;
	printf("Enter a word: ");
	ch=getchar();

	while(ch!='\n'){
		switch(toupper(ch)){
			case 'A':
			case 'E':
			case 'I': 
			case 'L':
			case 'N':
			case 'O':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
				count++;
				break;
			case 'D':
			case 'G': 
				count+=2;
				break;
			case 'B':
			case 'C': 
			case 'M':
			case 'P':
				count+=3;
				break;
			case 'F':
			case 'H':
			case 'V':
			case 'Y':
			case 'W':
				count+=4;
				break;
			case 'K':
				count+=5;
				break;
			case 'J':
			case 'X':
				count+=8;
				break;
			case 'Q':
			case 'Z':
				count+=10;
				break;
			default:
				break;
		}
		ch=getchar();
	}
	printf("Scrabble value: %d\n",count);
}


