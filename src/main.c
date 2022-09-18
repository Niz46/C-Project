#include <stdio.h>
#include <stdlib.h>


int main()
{
	//File Handling..
	FILE* fp;
	char filename[20] = "program.txt";
	fp = fopen(filename, "w");
	// int res = fprintf(fp, "");
	int res = fputs("Hello from fputs", fp);

	if(res >= 0){
		printf("Writing to %s was successful\n", filename);
	}else{
		printf("No vex! E no work\n");
	}
	return (0);
}