//accept the no from user chk weather perfect or not
#include<stdio.h>
#include<stdbool.h>
bool chkperfect(int ino)
{
  int isum=0;
  int icnt=0;

  if(ino<0)
  {
    ino=-ino;
    
  }

  for(icnt=1;(icnt<=(ino/2) && (isum<=ino));icnt++)
  {
      if((ino%icnt)==0)
      {
          
          isum=isum+icnt;
          
      }
      
  }
          if(isum==ino)
          {
              return true;
          }
          else
          {
              return false;
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
    
    bret=chkperfect(ivalue);
    printf("%d\n",bret);
    
    if(bret==true)
    {
        printf("%d is perfect no\n",ivalue);

    }
    else
    {
        printf("%d is not perfect no\n",ivalue);
    }

    return 0;
}