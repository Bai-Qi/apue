#include<dirent.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	struct dirent * dirp;
	DIR * dp;

	if(argc!=2){
		perror("need a argument");
	}

	if( (dp=opendir(argv[1])) == NULL){
		perror("cannot open dir");
	}

	while ( (dirp=readdir(dp)) != NULL ){
		printf("%s\n",dirp->d_name);
	}

	closedir(dp);
	exit(0);
}
