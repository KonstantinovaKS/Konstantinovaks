#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

void encrypted ( char arraySymbol[], int key);
void decrypt(char arraySymbol[] ,int key);

int main(){
const int ALL_NUMBER_LETTER = 1000;
char arraySymbol[ALL_NUMBER_LETTER];



int key = 0;
int i;
int j = 0;
int result = 0;
char selector;


printf("Enter string: ");
gets(arraySymbol);
printf("Enter key :");
scanf("%d", &key);


while (key >= 26)
       key -= 26;


  encrypted(arraySymbol,key);
  printf("Encrypted: %s\n", arraySymbol);

  printf("\nDo you want to decrypt ?  Y/N \n");

  fflush(stdin);

    scanf("%c", &selector);


    if ((selector=='Y')||(selector=='y'))
    {
           decrypt(arraySymbol, key);
           printf("Decrypted : %s\n", arraySymbol);
    }


}

void encrypted ( char arraySymbol[], int key){
   // char arraySymbol[ALL_NUMBER_LETTER];
    int i, j;
    for (i = 0, j=strlen(arraySymbol); i < j; i++){
    if ((arraySymbol[i] >= 97 && arraySymbol[i] <= 122) ||
        (arraySymbol[i] >= 65 && arraySymbol[i] <= 90))
         arraySymbol[i] = arraySymbol[i] + key;
    if (((arraySymbol[i] >= 97 && arraySymbol[i] <= 122) ||
        (arraySymbol[i] >= 65 && arraySymbol[i] <= 90)) == 0)
         arraySymbol[i] = arraySymbol[i] - 26 ;


     //printf("%s",);
    }
}
void decrypt(char arraySymbol[] ,int key){
     int i, j;
     //char result = 0;

     for (i = 0, j=strlen(arraySymbol); i < j  ; i++){
        if ((arraySymbol[i] >= 97 && arraySymbol[i] <= 122) ||
        (arraySymbol[i] >= 65 && arraySymbol[i] <= 90))
         arraySymbol[i] = arraySymbol[i] - key;
     if (((arraySymbol[i] >= 97 && arraySymbol[i] <= 122) ||
        (arraySymbol[i] >= 65 && arraySymbol[i] <= 90)) == 0)
         arraySymbol[i] = arraySymbol[i] + 26 ;


}
}


//}

