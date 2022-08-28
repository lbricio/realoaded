#include <stdio.h>

int	main(int argc, char **argv)
{	
	char *strtmp;
	
	printf("%s %s\n",argv[1],argv[2]);
	strtmp = argv[1];
	argv[1] = argv[2]; 
	argv[2] = argv[1];
	printf("%s %s\n",argv[1],argv[2]);

	return (0);
}
