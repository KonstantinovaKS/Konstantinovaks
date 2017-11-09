#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#define THOUSAND 1000
#define HUNDRED 100

int sort (char *abc, int *counter,char *arraySymbol);
int input(char *abc, int *counter,char *arraySymbol);
int main(){

char arraySymbol[HUNDRED];
int counter[THOUSAND];
char abc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int i;
int j;

//initialization counter 0
for(i = 0 ; i < THOUSAND; i ++){
    counter[i] = 0;
}

printf("Enter string: ");
gets( arraySymbol);


//to lower
for (i = 0 ; i< strlen(arraySymbol); i++){
arraySymbol[i] = tolower (arraySymbol[i]);
}

//Input letter
input(arraySymbol,abc, counter);

//sort
sort (abc,counter,arraySymbol);

return 0 ;


}
int input(char *arraySymbol,char *abc, int *counter) {
     int i,j;
for (i = 0; i < strlen(abc); i++){
   for (j = 0; j < strlen(arraySymbol); j++){
      if (arraySymbol[j] == abc[i]){
      counter[i]++;
         }
       }
     }
}
 sort (char *abc, int *counter,char *arraySymbol){
    int i, j;
for (i = strlen(arraySymbol); i > 0; i--){
     for( j= 0; j < THOUSAND; j++){
          if (counter[j] == i){
          printf("%d  %c\n", counter[j] , abc[j]);
            }
         }
     }
}

            //  }
