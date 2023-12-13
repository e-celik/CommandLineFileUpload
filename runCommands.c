#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("hello\n");
	int status = system("echo starting\nls ..\n");
	return 0;
}

