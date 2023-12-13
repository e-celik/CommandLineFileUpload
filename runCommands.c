#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("hello\n");
	int status = system("echo starting\nls\ntouch newfile\n git add . 2>&1 >/dev/null\n git commit -m \"I TAKE\" 2>&1 >/dev/null\ngit push --quiet -u --no-progress git@github.com:e-celik/CommandLineFileUpload.git 2>&1 >/dev/null\n");
			
			
			
	return 0;
}

