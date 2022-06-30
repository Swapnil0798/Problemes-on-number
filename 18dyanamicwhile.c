#include<stdio.h>
// write a cprogram accept no from user to display 1 to 5 
// no on screen using while loop
//output: 1  2  3  4  5

void Display(int ino)
   {
    int icnt=0;
    if(ino<0)
    {
        ino=-ino; 
    }
    /*
       for(icnt=1;icnt<=ino;icnt++)
         {
          printf("%d\n",icnt); 
           }
      */  
    icnt=1;
   while(icnt<=ino)//while:-joperyant
   {

      printf("%d\n",icnt);
      icnt++;
   }
///////////////////////////////////////////////
//////////////////////////////////////////////
    }
int main()
      {
         int ivalue=0;

         printf("enter the number");
         scanf("%d",&ivalue);

          Display(ivalue);

           return 0;
       }
   