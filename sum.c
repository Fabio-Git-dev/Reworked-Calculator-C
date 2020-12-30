#include <stdlib.h>
#include <stdlib.h>
#include "sum.h"

void sum() {

     float sum;

     float n1;
     float n2;

     int decision;

         printf("Insert first number \n");
         scanf("%f", &n1);



           printf("Insert second number \n");
            scanf("%f", &n2);



             printf("Doing Sum... \n");

              sum = n1 + n2;

              printf("%.2f \n", sum);

               printf("Do you want to continue with this operand? 1(Yes) 2(No) \n");
               scanf("%d \n", &decision);

               system("cls"); //Cleans terminal

}
