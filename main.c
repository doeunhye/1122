#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp = NULL;
	char input;
	int i;
	
	
	
	fp = fopen("sample.txt", "r");
	//printf("fp:%i\n", fp);
	while((input=fgetc(fp)) != EOF)
	{
		putchar (input);
	}
	fclose(fp);
	 
	return 0;
}
