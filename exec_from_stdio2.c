#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>

int main(void){
	pid_t pid;
	int status;
	char buf[1024];
	printf("%%");

	while( fgets(buf,1024,stdin)!= NULL){
		if(buf[strlen(buf)-1] == '\n')
			buf[strlen(buf)-1]='\0';


	if( (pid=fork()) < 0){
		perror("fork error");
	}
	else if(pid == 0){
		execlp(buf,buf,(char *)0);
		printf("cannot execute: %s",buf);
	}

	if( (pid=waitpid(pid,&status,0)) < 0){
		perror("waitpid error");
	}

	printf("%%");
	}
	exit(0);
}
