#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	/* Every 1 sec, print number increase 1 from 0 */
	for(i = 0; ; i++){
		printf("%10d\r", i);
		fflush(NULL);
		sleep(1);
	}
	return 0;
}
