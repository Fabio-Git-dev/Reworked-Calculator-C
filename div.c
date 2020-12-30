#include <stdlib.h>
#include <stdlib.h>
#include "div.h"


void divis() {


    float div;

    float n1;
    float n2;
    int decision;




         printf("Insert first number \n");
         scanf("%f", &n1);

         printf("Insert second number \n");
         scanf("%f", &n2);

         div = n1 / n2;

         printf("Subtraction.... \n");

         printf("%.2f \n", div);

          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");

}
