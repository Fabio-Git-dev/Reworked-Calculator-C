#include <stdlib.h>
#include <stdlib.h>
#include "mult.h"


void mult() {


    float mult;

    float n1;
    float n2;
    int decision;




         printf("Insert first number \n");
         scanf("%f", &n1);

         printf("Insert second number \n");
         scanf("%f", &n2);

         mult = n1 * n2;

         printf("Subtraction.... \n");

         printf("%.2f \n", mult);

          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");

}
