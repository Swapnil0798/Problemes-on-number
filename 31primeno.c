//accept the no from user chk weather primr or not
#include<stdio.h>
#include<stdbool.h>
bool chkprime(int ino)
{
  
  int icnt=0;
  int iprime=0;

  if(ino<0)
  {
    ino=-ino;
    
  }

  for(icnt=2;icnt<=(ino/2) ;icnt++)
  {
      if((ino%icnt)==0)
      {
          
          iprime++;
          
      }
      
  }
          if(iprime==0)
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
    
    bret=chkprime(ivalue);
    printf("%d\n",bret);
    
    if(bret==true)
    {
        printf("%d is prime no\n",ivalue);

    }
    else
    {
        printf("%d is not prime no\n",ivalue);
    }

    return 0;
}