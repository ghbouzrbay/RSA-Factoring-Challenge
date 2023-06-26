#include "factor.h"

int main(int argc, char *argv[])
{
    
size_t count;
	ssize_t line;
	char *buffer = NULL;
 FILE *file = fopen(argv[1], "r");	
    
 if (argc != 2)
	{
        fprintf(stderr, "Usage: factor <file>\n");
		exit(EXIT_FAILURE);
    }

    if (file == NULL)
    {
        fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
    }
line = getline(&buffer, &count, file);
    while (line != -1)
    {
        factorize(buffer);
    }

    return (0);
fclose(file);
}
