#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int searchNum=0;
int enterNum=0;
char selector;
int i;
int ok;


for(;;)
{
    srand(time(NULL));
    searchNum=rand() % 10;

    for (i=0; i<3 ;i++)
    {
        for(;;)
        {
 //Enter value
            printf(" \n Enter positive value :");
            ok=0;
            for (;;)
            {
                ok = scanf("%d", &enterNum);
                fflush(stdin);
                if (ok == 0)
                {
                    printf("I't not number!");
                    continue;
                }
                break;
            }
            if (enterNum < 0)
            {
                printf("Its negative \n");
                continue ;
            }
            break;
        }
//Search number
        if (enterNum == searchNum)
        {
            printf("You winner!!!\n");
            break;
        }
        if (enterNum < searchNum)
        {
            printf("give me a more\n");
        }

        if (searchNum < enterNum)
        {
            printf("just litle\n");
        }
    }

    printf("\n Contine or exit ?  Y/N \n");
    scanf("%c", &selector);

//conyinue or exit
    if ((selector=='Y')||(selector=='y')){
           continue;

    }

    return 0;



    }


}

