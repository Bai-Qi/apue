#include<stdio.h>
#include<stdlib.h>

int main(void){
	int n;

	while( (n = getc(stdin)) != EOF)
		if( putc(n,stdout) == EOF)
			perror("putc error");
		
	if(ferror(stdin)) // will study about it 
		perror("input error");

	exit(0);
}
