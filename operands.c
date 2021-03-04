#include <stdlib.h>
#include <stdlib.h>
#include "operands.h"
#include <math.h>
#define MAX 10




//DON'T PUT CONDITION VALUES THAT HAS TO BE READ IN THE MAIN HERE! OR ELSE THE VALUE FOR THE OCNDITION WILL FAIL TO BE VERIFIED.


void divis() {


         float div, n1, n2;


         system("COLOR 7");

               system("cls");

                 printf("Insert the numbers\n");
                  scanf("%f %f", &n1, &n2);




    if (n2 == 0) { //exception for the divider if you want to divide by 0.

        system("cls");

          system("COLOR 4");

            printf("You can't divide by 0.\n");

               system("pause");

                 system("cls");

                     return divis();



         } else {  //if the divider is different than 0, it will do the division.


         div = n1 / n2;


         printf("%.2f \n", div);

      }

}








void sub() {




    float n1, n2, sub;




        system("cls");

        printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         sub = n1 - n2;


         printf("%.2f \n", sub);




}







void sum() {


    float sum, n1, n2;





         system("cls");

         printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         sum = n1 + n2;


         printf("%.2f \n", sum);




}






void mult() {


    float mult;

    float n1;
    float n2;



        system("cls");

        printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         mult = n1 * n2;


         printf("%.2f \n", mult);





}



void power() {


     int pow1, pow2, elevation, elevation2;








       system("cls");


        printf("Insert two numbers \n");
        scanf("%d %d", &pow1, &pow2);



         elevation = pow1 * pow1; //power on the first number

         elevation2 = pow2 * pow2; //power on the second number.


         printf("%d %d \n", elevation, elevation2);





}


void compare() { //little comparison system between numbers.


            int a, b, c, d;




            printf("Insert 4 numbers\n");
            scanf("%d %d %d %d", &a, &b, &c, &d);

            //Resuming all the possible conditions between 4 numbers. each condition has his color scheme.


            if (a > b && c > d) {

            system("cls");


            printf("\033[0;31m%d is major than %d\n%d is minor than %d\n", a, b, c, d);





      }

        else if (a == b && c == d) {

            system("cls");


            printf("\033[0;33m%d is equal to %d\n%d is equal to %d\n", a, b, c, d);




        }

            else if (a < b && c < d) {

            system("cls");


             printf("\033[0;32m%d is minor than %d\n%d is minor than %d\n", a, b, c, d);





            } else if (a < b && c > d) {

            system("cls");


            printf("\033[0;35m%d is minor than %d\n%d is major than %d\n", a, b, c, d);




            } else if (a > b && c == d) {

                system("cls");


            printf("%\033[1;35m%d is major than %d\n%d is equal to %d\n", a, b, c, d);







    }         else if (a > b && c < d) {

            system("cls");


            printf("%\033[1;34md is major than %d\n%d is minor than %d\n", a, b, c, d);




    }       else if (a == b && c < d) {

                system("cls");


            printf("\033[1;36m%d is equal to %d\n%d is minor than %d\n", a, b, c, d);






    }      else if (a == b && c > d) {

                system("cls");
                system("COLOR 8");

            printf("\033[1;37m%d is equal to %d\n%d is major than %d\n", a, b, c, d);


}



}
