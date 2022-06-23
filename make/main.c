#include "common.h"
#include <stdlib.h>

int main(){
	char* str = input();
	print(str);
	//print("\n");
	free(str);

	return 0;
}
