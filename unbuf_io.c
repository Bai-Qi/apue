#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define BUFSIZE 4096

int main(int argc, char * argv[]){
	int n;
	char buf[BUFSIZE];

	while ( (n=read(STDIN_FILENO,buf, BUFSIZE))>0){
		if(write(STDOUT_FILENO,buf,n)!=n)
			perror("write error");
	}

	if(n<0)
		perror("read error");
	exit(0);
}
