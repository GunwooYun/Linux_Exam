/*
   fork() : copy process from parent process
   1 -> parent process
   0 -> child process
   <0 -> error
*/
#include <stdio.h>
#include <unistd.h>

static int g_var = 1;
char str[] = "PID";

int main(){
	int var;
	pid_t pid;
	var = 92;

	if((pid = fork()) < 0){
		perror("[ERROR] : fork()");
	}
	/* Child Process */
	else if(pid == 0){
		g_var++;
		var++;
		printf("Parent %s from Child process(%d) : %d\n", str, getpid(), getppid());
	}
	/* Parent Process */
	else{
		printf("Child %s from Parent Process(%d) : %d\n", str, getpid(), pid);
		sleep(1);
	}

	printf("pid  = %d, global var = %d, var = %d\n", getpid(), g_var, var);

	return 0;
}
