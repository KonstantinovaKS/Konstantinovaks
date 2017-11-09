#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

const int ALL_NUMBER_LETTER = 1000;

int main(){
const int ARRAY_SIZE;
char arraySymbol[ALL_NUMBER_LETTER];
int counter[ALL_NUMBER_LETTER];
char abc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int i;
int j;


 enterString(arraySymbol,counter);

 inputLetters(counter,abc, arraySymbol);

 outputLetters(counter, abc, arraySymbol);

//free(arraySymbol);
return 0 ;


}
void enterString( char arraySymbol [],int counter[]){
int i;

printf("Enter string: ");
gets( arraySymbol);
//initialization counter 0
for(i = 0 ; i < ALL_NUMBER_LETTER; i ++){
    counter[i] = 0;
}

//to lower
for (i = 0 ; i< strlen(arraySymbol); i++){
arraySymbol[i] = tolower (arraySymbol[i]);
}
}
  void outputLetters( int counter[] , char abc[],char arraySymbol []){
//Output count
int i, j;
for (i = strlen(arraySymbol); i > 0; i--){
     for( j= 0; j < ALL_NUMBER_LETTER; j++){
          if (counter[j] == i){
          printf("%d  %c\n", counter[j] , abc[j]);
            }
         }
     }
 }
 void inputLetters (int counter[], char abc[],char arraySymbol[]){
 //Input letter
 int i,j;
for (i = 0; i < strlen(abc); i++){
   for (j = 0; j < strlen(arraySymbol); j++){
      if (arraySymbol[j] == abc[i]){
      counter[i]++;
         }
       }
     }
             }
