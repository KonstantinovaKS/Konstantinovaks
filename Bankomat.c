#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ONE 1
#define TWO 2
#define THREE 3

int main()
{

int const THOUSAND = 1000;
int const FIFTY = 5000;

int isAdmin=0;
int isLoggedIn=0;
int pinAdmin=55555;

int pinCodArray[5000];
int ballance[5000];
int n = 0 ;
int j = 0;
int ball=0;
int cash=0;
int i = 0;
int b = 0;
int randPin = 0;
int pinCode = 0;
int lenghtArray = FIFTY;

 srand(time(NULL));


/*/initializatin  pinkod*/
    for ( i = 0; i < lenghtArray; i++){

        pinCodArray [i] = 0;

        }

    for ( i = 0; i < lenghtArray; i++){

        randPin = rand()% FIFTY;
        pinCodArray[i] = THOUSAND+ randPin;
        }
//initializatinn ballance
     for (i = 0; i< lenghtArray; i++ ){

         ballance [i] = 0;
        }

     for(i = 0;i< lenghtArray; i++){

        randPin = rand()% FIFTY;
        ballance[i] = THOUSAND+ randPin;
        }

// Enter pinkod
   for (i=0; i< 3 ; i++) {


       if (isLoggedIn || isAdmin) {

           break;
       }
        printf(" Enter pincode:\n");
        scanf("%d" , &pinCode);
        for (j =0;j < lenghtArray ; j++ )   {

            if (pinCode == pinCodArray[j]) {
                printf("Hello user!\n");
                isLoggedIn = 1;
                ball = j;

                break;
            } else if ( pinCode == pinAdmin){
                printf("Hello Admin\n");
                isAdmin = 1;
               // isLoggedIn=1;
                break;

            }
        }
        if (i == THREE) {

            return 0 ;
        }
   }

// Menu for user
        if (isLoggedIn == 1) {

       	 printf("1: Balance\n");
       	 printf("2: withdraw money\n");
       	 printf("3: Put money\n");
       	 scanf("%d",&n);
       	 switch(n)
       	 {
       	 case ONE: printf("\n Balance %d", ball);
       	 break;
       	 case TWO: printf("\n Take cash: ");
                   scanf("%d" ,&cash);
       	           printf("\nBallance = %d\n", ball- cash);
       	 break;
       	 case THREE: printf("\n Put cash \n",cash);
       	          scanf("%d" ,&cash);
       	         printf("\nBallance = %d", ball+ cash);
       	 break;
       	 default: break;
       	  }
            }
// Menu for admin
        if (isAdmin == 1){

         printf("1: Do you want to NULL?\n");
       	 printf("2: Look all  pins\n");

       	 scanf("%d",&b);
       	 switch(b)
       	 {
       	 case ONE:
       	       for (i = 0; i< lenghtArray; i++ )
               {
         ballance [i] = 0;
         printf("User : %d\n", ballance[i]);
               }
         break;
       	 case TWO:
       	     for (i=0; i<lenghtArray; i++)
                printf("User %d: %d\n", i+1, ballance[i]);
       	 break;

       	 default: break;
       	  }
            }

    return 0;
}
