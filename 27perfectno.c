//accept the no from user and display sum of factors
#include<stdio.h>
#include<stdbool.h>
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
bool chkperfect(int ino)
{
    int ians=0;
    ians=sumfact(ino);
    if(ians==ino)
    {
        return true;

    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////////////
//Date:25/04/2022
////////////////////////////////////////////////////
int main()
{  
    int ivalue=0;
    bool bret=0;
    printf("enter the no");
    scanf("%d",&ivalue);
    
    bret=chkperfect(ivalue);
    printf("%d\n",bret);
    
    if(bret==true)
    {
        printf("%dis perfect no",ivalue);

    }
    else
    {
        printf("%dis not perfect no",ivalue);
    }

    return 0;
}