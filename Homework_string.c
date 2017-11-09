#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>



int main(){
const int ALL_NUMBER_LETTER = 1000;
//char arraySymbol[ALL_NUMBER_LETTER];
int counter[ALL_NUMBER_LETTER];
const int ARRAY_SIZE;
char abc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int i;
int j;
char* arraySymbol = malloc(sizeof(char) * ARRAY_SIZE);
//initialization counter 0
for(i = 0 ; i < ALL_NUMBER_LETTER; i ++){
    counter[i] = 0;
}

printf("Enter string: ");
gets( arraySymbol);


//to lower
for (i = 0 ; i< strlen(arraySymbol); i++){
arraySymbol[i] = tolower (arraySymbol[i]);
}

//Input letter
for (i = 0; i < strlen(abc); i++){
   for (j = 0; j < strlen(arraySymbol); j++){
      if (arraySymbol[j] == abc[i]){
      counter[i]++;
         }
       }
     }
//Output count
for (i = strlen(arraySymbol); i > 0; i--){
     for( j= 0; j < ALL_NUMBER_LETTER; j++){
          if (counter[j] == i){
          printf("%d  %c\n", counter[j] , abc[j]);
            }
         }
     }
free(arraySymbol);
return 0 ;


}

            //  }
