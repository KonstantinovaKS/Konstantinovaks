#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i;
	int j = 0;
	int size;
	printf("Vvedite kolichestvo : \n");
	scanf("%d" , &size);
	 for (i = 1; i <= size; i++)
	{
		float ofsset = (float)(size - i) / 2;
		int koof = round(ofsset);
		do
		{
				if ((koof > 0 && j <= ofsset || j > size - ofsset) || (koof == 0 && (j < ofsset || j >= size - ofsset)))
					printf("%c", ' ');
				else
					printf("%c", '*');

			j++;
		} while (j != size);

		 j= 0;
		printf("%c", '\n');
	}
	printf("%c", '*');

	return 0;
}



