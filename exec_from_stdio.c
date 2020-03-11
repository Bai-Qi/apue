#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(int argc, char * argv[]){
	pid_t pid;
	int status;

	if( (pid=fork()) < 0){
		perror("fork error");
	}
	else if(pid == 0){
		execlp(argv[1],argv[1],(char *)0);
		printf("cannot execute: %s",argv[1]);
	}

	if( (pid=waitpid(pid,&status,0)) < 0){
		perror("waitpid error");
	}

	printf("%%");
	exit(0);
}
