#include<stdio.h>
//write a c program accept no from user and diplay hello
void Display(int ino)
{
    int icnt=0;
    if(ino<0)//filter
    {
        printf("plzz enter positive value");
        return;
    }

    for(icnt=1;icnt<=ino;icnt++)
    {
      printf("HELLO\n");
    }
}
//////////////////
//////input:-5
//////outout:plzz enter positve value
//////////////////
//////////////////


int main()
{
    int ivalue=0;
    printf("enter the number\t");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}