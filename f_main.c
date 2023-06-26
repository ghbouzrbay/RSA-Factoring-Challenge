#include "factor.h"

int main(int argc, char *argv[])
{
    
char line[100];
    int number;
 FILE *file = fopen(argv[1], "r");	
    if (argc != 2)
	{
        printf("Usage: factors <file>\n");
        return 1;
    }

    if (file == NULL)
    {
        printf("Failed to open file\n");
        return (1);
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        number = atoi(line);
        factorize(number);
    }

    fclose(file);
    return (0);
}
