#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void){
	printf("the uid is %d and gid is %d", getuid(),getgid());
	exit(0);
}
