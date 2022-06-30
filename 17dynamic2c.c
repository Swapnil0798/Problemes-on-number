// write a cprogram accer no from user to display 1 to 5 no on screen
//output: 1  2  3  4  5
#include<stdio.h>
void Display(int ino)
   {
    int icnt=0;
    if(ino<0)
    {
        ino=-ino;
    }
       for(icnt=1;icnt<=ino;icnt++)
         {
          printf("%d\n",icnt); 
           }

    }
///////////////////////
//Function name : Display
//Description : display  1 to 5 no on screen
//Input  : integer,integer
//Output : integer
//Date : 19/04/2022
//Author : SWAPNIL SHIVAJI JAGTAP
///////////////////////////////

 
    int main()
      {
         int ivalue=0;

         printf("enter the number");
         scanf("%d",&ivalue);

          Display(ivalue);

           return 0;
       }
   /////////////////////
   ///input: integer
   //output: 1  2  3  4  5  
   //////////////////////