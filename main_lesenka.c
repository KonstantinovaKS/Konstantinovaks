#include <stdio.h>
#include <stdio.h>

int main ()

{
  int i, k, size;

  printf("Vvedite znachenie :\n ");
  scanf("%d", &size);

    for (i = 1; i <= size; i++)
        {
             for (k = 0; k < i; k++)
              {
   printf("%c", '*');
              }
   printf("%c", '\n');
        }
return 0;
}



