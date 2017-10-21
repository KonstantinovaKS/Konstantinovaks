#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

int ballance=5000;

int pinkodArray[5000];
//int arClient[5000];

int j;
int pinAdmin=123;
int i;
//int n;
//int* ar;
int randPin = 0;
int pinCode = 0;
int lenghtArray = 5000;

 srand(time(NULL));
//arClient[5000] = *ar;



//initializatin 0
    for ( i = 0; i < lenghtArray; i++)
    {
        pinkodArray [i] = 0;
 //arClient[i] = 0;
    }



    for ( i = 0; i < lenghtArray; i++)
    {
        randPin = rand()%5000;
        pinkodArray[i] = 1000+ randPin;
    }



   for (i=0; i< 3 ; i++)
   {
        printf(" Enter pincode:\n");
        scanf("%d" , &pinCode);
        for (j =0;j < lenghtArray ; j++ )
        {
            if (pinCode = pinkodArray[j])
            {
                print("Hello user!");
            }else if ( pinCode==pinAdmin){
                printf("Hello Admin\n");
            }



        }
   }

     //writing data to an array
    /* for ( i = 0; i < lenghtArray; i++)
       {
        ar[i] = (555 + i) * 2;
       }
      for( i = 0; i < lenghtArray; i++)
       	{
       printf("%d: ",pinkodArray[i]);
       	}
       	 printf("\n\n");
       	  for( i = 0; i < lenghtArray; i++)
       	 {
       	 printf("%d: ",ar[i]);
       	 }
       	 printf("\n\n");
       	 for(;;)
       	 {*/
/*
       	 printf("1: Balance\n");
       	 printf("2: withdraw money\n");
       	 printf("3: Put money\n");

       	 scanf("%d",&n);

       	 switch(n)
       	 {
       	 case 1: printf("\n Balance %d",ar);
       	 break;
       	 case 2: printf("\n Take cash %d", ar - n);
       	 break;
       	 case 3: printf("\n Put cash \n");
       	 break;

       	 default: break;
       	  }
*/

    return 0;
}

