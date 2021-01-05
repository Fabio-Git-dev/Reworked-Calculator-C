#include <stdio.h>
#include <stdlib.h>
#include "operands.h"
#include <math.h>






 //Copyright by Fabio-Git-Dev - Software Engineer student UniBa


     unsigned int choice; //Used to choose unit at the beginning

     unsigned int decision;  //Used to chose option at the end of operation.



      char press[];


   /*

    NOTE, all the inputs that require a scanf that are depending from a do-while or a if-else ecc, MUST be declared in the same place
    where the cicles are declared, or else the condition won't be read and it won't work

   */


int main(void) //Main function

{



         printf("\033[0;31m\t\t\t\t\t **********************************\n");
         printf("\t\t\t\t\t*     CALCULATOR BY Fabio-Git-Dev *\n");
         printf("\t\t\t\t\t*                V1.0             *\n");
         printf("\t\t\t\t\t ********************************* \n");
         printf("\t\t\t\t\tPress any Key to go to the menu....\n");

         gets(&press);

         system("cls");








   do{




    printf("\033[0;37m\t\t\t***Select an operation*** \n");


    printf("\033[0;31m1(+)  \n\n\033[0;36m2(-)  \n\n\033[0;33m3(x)  \n\n\033[0;32m4(/)  \n\n\033[0;34m5(Power)  \n\n\033[0;35m6(Compare 4 numbers)  \n\n\033[0;37m7(Exit) \n");

    scanf("%d", &choice);


    /*Condition in case the number is higher to the number given in the selection
      for each number a condition is needed, that's why need to use else if to express a condition.*/

        if (choice > 7 || choice == 0)


            {  //if the choice is major or equal to 0

        system("cls");



        printf("\033[0;31mWrong selection, retry\n");

        system("Pause");

        system("cls");

        return main();

        }




switch (choice) { //switch case for operand choice.



case 1:

     do {

         sum();


          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");

           if (decision != 1) { //condition to return to the main menu if a person press 2 for No.

            return main();


          }


   } while (decision == 1);
     break;





 case 2:

     do {

         sub();



          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");

           if (decision != 1) {

            return main();


          }


    } while (decision == 1);
      break;







 case 3:

    do {
            mult();


          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");

           if (decision != 1) {

            return main();


          }


    } while (decision == 1);
      break;




 case 4:
     do {

          divis();


           printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
           scanf("%d", &decision);

           system("cls");

           if (decision != 1) {

            return main();


          }





         } while (decision == 1);
           break;


 case 5:
    do {

          power();

          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

          system("cls");

          if (decision != 1) {

            return main();


          }



    } while (decision == 1);
      break;



 case 6:
    do {

            system("cls");


            compare();


            printf("\033[0;37mDo you want to continue with this format? 1(Yes) 2(No) \n");
            scanf("%d", &decision);





          system("cls");

          if (decision != 1) {

            return main();


          }



    } while (decision == 1);
      break;


default:

            system("cls");

            printf("\033[0;33mExiting program... \n");

            printf("\033[0;31mDo you want to support me? Give a star to my page!\n\033[0;37mhttps://github.com/Fabio-Git-dev/Reworked-Calculator-C\n ");
            system("pause"); //Value used to exit program.

            return 0;





}


} while (choice == 1);



}





 //end of function


































