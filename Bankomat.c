#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{


int isAdmin=0;
int isLoggedIn=0;

int ball=5000;
int cash=0;

int pinkodArray[5000];
int ballance[5000];
int n;
int j;
int pinAdmin=55555;
int i;
int b;
int randPin = 0;
int pinCode = 0;
int lenghtArray = 5000;

 srand(time(NULL));


/*/initializatin  pinkod*/
    for ( i = 0; i < lenghtArray; i++)
    {
        pinkodArray [i] = 0;

    }



    for ( i = 0; i < lenghtArray; i++)
    {
        randPin = rand()%5000;
        pinkodArray[i] = 1000+ randPin;
    }
//initializatinn ballance
     for (i = 0; i< lenghtArray; i++ )
     {
         ballance [i] = 0;
     }

     for(i = 0;i< lenghtArray; i++)
     {
          randPin = rand()%5000;
        ballance[i] = 1000+ randPin;
     }

// Enter pinkod
   for (i=0; i< 3 ; i++)
   {

       if (isLoggedIn || isAdmin)
       {
           break;
       }
        printf(" Enter pincode:\n");
        scanf("%d" , &pinCode);
        for (j =0;j < lenghtArray ; j++ )
        {
            if (pinCode == pinkodArray[j])
            {

                printf("Hello user!\n");
                isLoggedIn=1;
                ball=j;

                break;
            }else if ( pinCode==pinAdmin){
                printf("Hello Admin\n");
                isAdmin=1;
               // isLoggedIn=1;
                break;

            }
        }
        if (i==3)
        {
            return 0 ;
        }
   }

// Menu for user
        if (isLoggedIn==1)
           {
       	 printf("1: Balance\n");
       	 printf("2: withdraw money\n");
       	 printf("3: Put money\n");
       	 scanf("%d",&n);
       	 switch(n)
       	 {
       	 case 1: printf("\n Balance %d", ball);
       	 break;
       	 case 2: printf("\n Take cash: ");
       	         scanf("%d" ,&cash);
       	         printf("\nBallance = %d\n", ball- cash);
       	 break;
       	 case 3: printf("\n Put cash \n",cash);
       	          scanf("%d" ,&cash);
       	         printf("\nBallance = %d", ball+ cash);
       	 break;
       	 default: break;
       	  }
            }
// Menu for admin
        if (isAdmin==1)
            {
         printf("1: Do you want to NULL?\n");
       	 printf("2: Look all  pins\n");

       	 scanf("%d",&b);
       	 switch(b)
       	 {
       	 case 1:
       	       for (i = 0; i< lenghtArray; i++ )
               {
         ballance [i] = 0;
         printf("User : %d\n", ballance[i]);
               }
         break;
       	 case 2:
       	     for (i=0; i<lenghtArray; i++)
                printf("User %d: %d\n", i+1, ballance[i]);
       	 break;

       	 default: break;
       	  }
            }

    return 0;
}
