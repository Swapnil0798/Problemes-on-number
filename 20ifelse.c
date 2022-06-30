//check weather no is even or odd


#include<stdio.h>
#include<stdbool.h>
   bool checkeven(int ino)
   {
    
    if((ino%2)==0)
    {
        return true;
    }
    else
    {
       return false;
    }

 }
///////////////////////////////////////
///////////////////////////////////////
//Date:20/04/2022
//Auther:JAGTAP SWAPNIL SHIVAJI
//////////////////////////////////////

int main()
{
  int ivalue=0;
  bool bret=false;

  printf("ener the number\n");
  scanf("%d",&ivalue);

  bret=checkeven(ivalue);
  if(bret==true)
  {

      printf("%d is even no\n",ivalue);
      
  }
  else
  {
      printf("%d is odd no\n",ivalue);
  }

    return 0;
}