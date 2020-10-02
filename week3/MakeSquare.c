#include <stdio.h>

int main()
{
	int side;
	int Char;

	while(1)
	{
		printf("Enter a interger between 2 and 30: ");
		scanf("%d", &side);
		if (side >= 2 && side <= 30)
		{

			for(int i = 0; i < side; i++)
			{
				for(int j = 0; j < side; j++)
				{
					if((i == 0 || i == (side - 1)) || (j == 0 ||  j == (side - 1)))
						Char = ((int)'X');
					else
						Char = ((int)' ');
					printf("%c", ((char)Char));
				}
				printf("\n");
			}
			return(0);
		}
		else
		{
			printf("Input Err!\n");
			continue;
		}
	}
}

