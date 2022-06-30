// 1 gram= 4000
// 2 gram=8000
// 5 gram = 20000
// 10 gram = 40000

#include<Stdio.h>
void switchs(int iweight)
{
  switch(iweight)
  {
      case 1:
      printf("your bill amt is 4000");
      break;

      case 2:
      printf("your bill amt is 8000");
      break;
    
     case 5:
      printf("your bill amt is 20000");
      break;

      case 10:
      printf("your bill amt is 40000");
      break;

      default:
      printf("invalid weight\n");
  }

}
///////////////////////////////////////
// Date: 20/02/2022
// Auther Name:JAGTAP SWAPNIL SHIVAJI
///////////////////////////////////////
int main()
{
  int ivalue=0;

  printf("enter the gold size that you purchase\n");
  scanf("%d",&ivalue);

  switchs(ivalue);

   return 0;
}