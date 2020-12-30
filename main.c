#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sum.h"
#include "div.h"
#include "mult.h"
#include "sub.h"

 //Copyright by Fabio-Git-Dev - Software Engineer student UniBa


   int choice; //Used to choose unit at the beginning

   int decision; //Used to chose option at the end of conversion.





int main() //Main function

{


         printf("Calculator by Fabio-Git-Dev \n");



   do{


    printf("Wich operation you want to do? 1(+) 2(-) 3(x) 4(/) 5 and others(Exit) \n");

    scanf("%d", &choice);



switch (choice) { //switch case for operand choice.

case 1:

     do{

         sum();

   } while (decision == 1);
     break;



 case 2:

     do {

         sub();

    } while (decision == 1);
      break;




 case 3:

    do {
            mult();

    } while (decision == 1);
      break;


 case 4:
     do {

          divis();

         } while (decision == 1);
           break;





default:


            printf("Wrong Button! Retry \n");
            system("pause"); //Value used to exit program.

            return 0;





}


} while (choice != 5);
}





 //end of function


































