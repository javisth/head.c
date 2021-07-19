// Javisth Chabria
// jc4377


#include <stdio.h>


int
main(int argc, char *argv[])
{
	int nl;
	int c;
	FILE *fp;
	
	nl = 0;

	if(argc < 2){
		printf("Argument missing\n");
		return 0;
	}
	fp = fopen(argv[1], "r");
	while((c = fgetc(fp)) != EOF) {
		if(nl > 9){
			return 0;
		}
		// count number of lines
		if(c == '\n')
			nl++;
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}
