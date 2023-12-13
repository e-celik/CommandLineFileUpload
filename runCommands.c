#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("hello\n");
	int status = system("echo starting\nls\n\ntouch newfile\n git add .\n git commit -m \"I TAKE\"\ngit push git@github.com:e-celik/CommandLineFileUpload.git\n");
	return 0;
}

