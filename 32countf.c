#include<stdio.h>
  int countfactor(int ino)
{
    int icnt=0;
    int ifactcnt=0;
for(icnt=1;icnt<=(ino/2) ;icnt++)
  {
      if((ino%icnt)==0)
      {
          
          ifactcnt++;
          
      }
      }
      return ifactcnt;
}
  
int main()
{  
    int ivalue=0;
    int iret=0;
    printf("enter the no\n");
    scanf("%d",&ivalue);
    
    iret=countfactor(ivalue);
    printf("%d\n",iret);
    
    return 0;
}