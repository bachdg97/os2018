#include "stdio.h"
#include "unistd.h"
int main()
{
	int pid1 = fork();
	if (pid1 == 0)
	{
	printf("Going to launch ps -ef\n");
	char *args[]= { "bin/ps", "-ef", NULL};
	execvp("bin/ps", args);
	printf("Finished launching ps -ef");
	return 0;
	}
	
}
