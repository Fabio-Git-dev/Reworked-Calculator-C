#include <stdlib.h>
#include <stdlib.h>
#include "operands.h"

//DON'T PUT CONDITION VALUES THAT HAS TO BE READ IN THE MAIN HERE! OR ELSE THE VALUE FOR THE OCNDITION WILL FAIL TO BE VERIFIED.

void divis() {


     float div;

     float n1, n2;





         printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);

         if (n2 == 0) {

            printf("You can't divide per 0.\n");

            return divis();
         }


         div = n1 / n2;


         printf("%.2f \n", div);



}


void sub() {




    float n1, n2, sub;






        printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         sub = n1 - n2;


         printf("%.2f \n", sub);




}

void sum() {


    float sum;

    float n1;
    float n2;





         printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         sum = n1 + n2;


         printf("%.2f \n", sum);




}


void mult() {


    float mult;

    float n1;
    float n2;





        printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         mult = n1 * n2;


         printf("%.2f \n", mult);





}








