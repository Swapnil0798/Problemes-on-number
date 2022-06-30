
///////////////////////////////////
//algorithm
//START
//Accept no from user
//check weather no is negative or nott 
//if negative or not
//
//create 1 variable is sum
//
//ieter till cnt is less than or equal to 1
//increment the value by 1
//add the value of cnt to sum
//
//END
///////////////////////////////////
#include<stdio.h>

  int Sum(int ino)
{   

   int isum=0;
   int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }
   
    for(icnt=1;icnt<=ino;icnt++)
    {
       isum=isum+icnt;
    
     }
    return isum; 
}
///////////////////////////////////
int main()
{
    int ivalue=0;
    int iret=0;
    
    printf("enter the no\n");
    scanf("%d",&ivalue);
    
    
    iret=sum(ivalue);
    printf("sum is %d\n",iret);
    
    return 0;
}