#include <stdio.h>
#include <stdlib.h>

int main()

{

    int i;
    int j;
    int size=0;
    int k;
    int stars;
    int play;


      printf("\n enter floors" , size);
      scanf("%d" , &size);
    for (i=0 , play = size, stars = -1; i <= size; i++, stars +=2,play--) {
    for (j = 0; j < play; j++){
      printf(" ");
    }

    for (k = 1;k < stars; k++){
      printf("*");
    }
      printf(" \n");
    }

    for (i = 0;i < size - 1; i++){
      printf(" ");
    }

      printf("*\n");

      return 0;
}



