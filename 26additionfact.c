//accept the no from user and display sum of factors
#include<stdio.h>
int sumfact(int ino)
{
  int isum=0;
  int icnt=0;
  if(ino<0)
  {
    ino=-ino;
    
  }
  for(icnt=1;icnt<=(ino/2);icnt++)
  {
      if((ino%icnt)==0)
      {
          
          isum=isum+icnt;
          
      }
  }
          return isum;
    
}
////////////////////////////////////////////////////
//Date:25/04/2022
////////////////////////////////////////////////////
int main()
{  
    int ivalue=0;
    int iret=0;
    printf("enter the no");
    scanf("%d",&ivalue);
    
    iret=sumfact(ivalue);
    printf("%d\n",iret);

    return 0;
}