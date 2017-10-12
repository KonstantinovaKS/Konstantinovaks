#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int searchNum=0;
int enterNum=0;
char selector;
int i;

for(;;)
{
    srand(time(NULL));
    searchNum=rand() % 10;

    for (i=0; i<3 ;i++)
    {       // printf("");
        for(;;)
        {
            printf(" \n Enter positive value :");
            scanf("%d", &enterNum);

            if ((enterNum>='A' && enterNum <='Z')  || (enterNum>= 'a' && enterNum <= 'z')){
                printf("simvol ne podhodit" );
                continue;
            }

            if (enterNum < 0)
            {
                printf("Its negative :");
                continue ;
            }
       // break;

            if (enterNum == searchNum){
                printf("You winner!!!");
                break;
            }

            if (enterNum < searchNum){
                printf("Dobavte");
            }

            if (searchNum < enterNum){
                printf("Menshe");
            }
       // }
    }

    printf("\n Contine or exit ?  Y/N \n");
    scanf("%c", &selector);
    selector=getchar();

    if ((selector=='N')||(selector=='n')){
           break;
    }

return 0;
    }

    return 0;
    }

 // return 0;
}

