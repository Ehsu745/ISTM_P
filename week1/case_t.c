#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int main()
{
	int c;
	int ind_vol;
	int hash;

	FILE *file;
	file = fopen("story.txt", "r");

	hash = 0;
	ind_vol = 0;
	if (file)
	{
    	while ((c = getc(file)) != EOF)
		{
			if (hash == 12)
			{
				printf("\n");
				hash = 0;
			}
			switch(c) {
				case 65: case 69:  case 73:  case 79:  case 85: 
				case 97: case 101: case 105: case 111: case 117:
					ind_vol++;
					break;
				default:
					break;
			}
			if (ispunct(c))
				continue;
			if (c == ' ')
			{
        		putchar('#');
				hash++;
			}
			else
				putchar(c);
		}
    	fclose(file);
		printf("\nTotal %d Vowels\n", ind_vol);
	}
	return(0);
}
