//write a c program 
//check weather no is divisible by 3 and 5


#include<stdio.h>
#include<stdbool.h>
   bool check(int ino)
   {
    
    if(((ino%3)==0) && ((ino%5)==0))
    {
        return true;
    }
    else
    {
       return false;
    }

 }
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

  bret=check(ivalue);
  if(bret==true)
  {

      printf("%d is divisible by 3 & 5\n",ivalue);
      
  }
  else
  {
      printf("%d is not divisible by 3 and 5 no\n",ivalue);
  }

    return 0;
}
