#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "utils.h"

int main(int argc, char const *argv[])
{
	char * test;
	getcwd(test , 64*sizeof(char));
	printf("%s\n", test);
	return 0;
}