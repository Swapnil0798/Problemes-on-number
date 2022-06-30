// 0 to 35   fail
//35 to 50   pass class
//50 to 60   second class
//60 to 70   first class
//70 to 100  first class with distingtion

#include<stdio.h>

void Diplayclass(float fmarks)
{
    if(fmarks>0.0 && fmarks<35.0)
    {
        printf("you are fail\n");
    }
    else if(fmarks>=35.0 && fmarks<50.0) 
    {
        printf("pass class\n");
    }
    else if(fmarks>=60.0 && fmarks<70.0) 
    {
        printf("second  class\n");
    }
    else if(fmarks>=70.0 && fmarks<=100) 
    {
        printf(" first class with distinction\n");
    }
    else
    {
              printf("invalid marks");
    }

}
//////////////////////////////////////
//  Date:21/04/2022
//  Auther name: JAGTAP SWAPNIL SHIVAJI
//////////////////////////////////////
int main()
{   

    float fvalue=0.0;

    printf("Enter the percentage");
    scanf("%f",&fvalue);
    Diplayclass(fvalue);
    return 0;
}