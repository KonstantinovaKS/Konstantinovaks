#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

void encrypted ( char arraySymbol[], char key[]);
void decrypt(char arraySymbol[] ,char key[]);
void realkey (char key []);


int main(){

const int ALL_NUMBER_LETTER = 1000;
char arraySymbol[ALL_NUMBER_LETTER];

char key[26];
int i;
int j = 0;
int result = 0;
char selector;


for (i = 0, j = strlen(key); i<j ; i++)
   key[i] = 0;

printf("Enter string: ");
gets(arraySymbol);
printf("Enter key :");
gets(key);


  realkey(key);
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

void realkey (char key []){
    int i;

        for(i = 0; i < strlen(key); i++){
            if(isupper(key)){
            key[i] = key[i] - 64;
        }
            else{
                key[i] = key[i] - 96;
    }
}
}

void encrypted (char arraySymbol[], char key[]){

    int i, j, n;
    for (i = 0,n = 0, j=strlen(arraySymbol); i < j; i++,n++){
            if(n >= strlen(key)){
                n = n %strlen(key);
            }
        if (arraySymbol[i] >= 97 && arraySymbol[i] <= 122)
            arraySymbol[i] = (arraySymbol[i] + key[n]);

            if(arraySymbol[i] >= 65 && arraySymbol[i] <= 90)
            arraySymbol[i] =(arraySymbol[i] + key[n]);

                if (((arraySymbol[i] >= 97 && arraySymbol[i] <= 122) ||
                   (arraySymbol[i] >= 65 && arraySymbol[i] <= 90))==0 )
                    arraySymbol[i] = arraySymbol[i] - 26 ;


         }
}
void decrypt(char arraySymbol[] ,char key[]){
     int i,n, j;

     for (i = 0,n = 0, j = strlen(arraySymbol); i < j  ; i++, n++){
             if(n >= strlen(key)){
                n = n %strlen(key);
            }

        if ((arraySymbol[i] >= 97 && arraySymbol[i] <= 122) ||
             (arraySymbol[i] >= 65 && (arraySymbol[i] <= 90)))
             arraySymbol[i] = arraySymbol[i] - key[n];



                if (((arraySymbol[i] >= 97 && arraySymbol[i] <= 122) ||
                    (arraySymbol[i] >= 65 && arraySymbol[i] <= 90)) == 0)
                     arraySymbol[i] = arraySymbol[i] + 26 ;


}
}


//}

