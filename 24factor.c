//accept the no from user and display its factor
//input:10
//output:1 2 5
//input:9
//output:1,3
//input:20
//output:1 2 4 5 10
//input:17
//output:1
//input:-20
//output:1 2 4 5 10


#include<stdio.h>

void  Displayfactors(int ino)
{
  int icnt=0;
  if(ino<0)
  {
    ino=-ino;
    
  }
  //    1       2       3
  for(icnt=1;icnt<=ino;icnt++)  
    //1>initialisation //2>condition//3>dispacement
                              
  {      
    if((ino%icnt)==0)
    {
      printf("%d\n",icnt);//4> body

    }
  }
}
//////////////////////
//Date:25/04/2022
///////////////////
int main()
{
   int ivalue=0;

   printf("Enter the no:\n");
   scanf("%d",&ivalue);

   Displayfactors(ivalue);

        return 0;
  }
  //Time complexity=n