//
#include<stdio.h>
#include<stdbool.h>
void  Displayf(int ino)
{
  int icnt=0;
  
  //    1       2       3
  for(icnt=1;icnt<=ino/2;icnt++)  
    //1>initialisation //2>condition//3>dispacement
                              
  {      
    if((ino%icnt)==0)
    {
      printf("%d\n",icnt);//4> body

    }
  }
}

  void  DisplayB(int ino)
{
  int icnt=0;
  

   for(icnt=ino/2;icnt>=1;icnt--)  
    //1>initialisation //2>condition//3>dispacement
                              
  {      
    if((ino%icnt)==0)
    {
      printf("%d\n",icnt);//4> body

    }
  }
}


  
////////////////////////////////////////////////////
//Date:26/04/2022
////////////////////////////////////////////////////
int main()
{  
    int ivalue=0;
    bool bret=0;
    printf("enter the no\n");
    scanf("%d",&ivalue);

  printf("forward loop:\n");
   Displayf(ivalue);

   printf("backward loop:\n");
    DisplayB(ivalue);
    
    

    return 0;
}