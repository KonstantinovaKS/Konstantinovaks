#include <stdio.h>
#include <stdio.h>

int main ()

{
  int i, k, size;

  printf("Vvedite znachenie :\n ");
  scanf("%d", &size);

    for (i = size; i >=1; i--){

            for (k = i; k > 0; k--){

   printf("%c", '*');
              }
   printf("%c", '\n');
        }
 return 0;
}



