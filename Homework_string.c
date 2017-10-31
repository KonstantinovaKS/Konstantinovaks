#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include<string.h>
#include<ctype.h>


int main(){

char arraySymbol[100];
int counter[1000];
char abc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int i;
int j;

//initialization counter 0
for(i = 0 ; i < 1000; i ++){
    counter[i] = 0;
}

printf("Enter string: ");
scanf("%s", arraySymbol);


//to lower
for (i = 0 ; i< strlen(arraySymbol); i++){
arraySymbol[i] = tolower (arraySymbol[i]);
}

//Search letter
for (i = 0; i < strlen(abc); i++){
   for (j = 0; j < strlen(arraySymbol); j++){
      if (arraySymbol[j] == abc[i]){
      counter[i]++;
      }
    }
}
//sort
for (i = strlen(arraySymbol); i > 0; i--){
     for( j= 0; j < 1000; j++){
if (counter[j] == i){

printf("%d  %c\n", counter[j] , abc[j]);
 }
     }
}
return 0 ;
}
            //  }
