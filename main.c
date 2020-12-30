#include <stdio.h>
#include <stdlib.h>
#include "operands.h"

 //Copyright by Fabio-Git-Dev - Software Engineer student UniBa


     int choice; //Used to choose unit at the beginning

     int decision;  //Used to chose option at the end of operation.



   /*NOTE, all the inputs that require a scanf that are depending from a do-while or a if-else ecc, MUST be declared in the same place
    where the cicles are declared, or else the condition won't be read and it won't work*/






int main(void) //Main function

{


         printf("Calculator by Fabio-Git-Dev \n");



   do{


    printf("Wich operation you want to do? 1(+) 2(-) 3(x) 4(/) 5 and others(Exit) \n");

    scanf("%d", &choice);


    /*Conditions in case the number doesn't correspond to the number given in the selection
      for each number a condition is needed, that's why need to use else if to express a condition.*/


    if (choice == 6) {

        printf("Wrong selection, retry\n");

        return main();
    }

       else if (choice == 7) {

        printf("Wrong selection, retry\n");

        return main();


       } else if (choice == 8) {

        printf("Wrong selection, retry\n");

        return main();


       }  else if (choice == 9) {

        printf("Wrong selection, retry\n");

        return main();

       }




switch (choice) { //switch case for operand choice.



case 1:

     do{

         sum();

          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");


   } while (decision == 1);
     break;





 case 2:

     do {

         sub();

          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");


    } while (decision == 1);
      break;







 case 3:

    do {
            mult();

             printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");


    } while (decision == 1);
      break;




 case 4:
     do {

          divis();

           printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");


         } while (decision == 1);
           break;







default:


            printf("Exiting program... \n");
            system("pause"); //Value used to exit program.

            return 0;





}


} while (choice == 1);



}





 //end of function


































