#include<stdio.h>
//write a c program accept no from user and diplay hello
void Display(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
      printf("HELLO\n");
    }
}

int main()
{
    int ivalue=0;
    printf("enter the number\t");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}
////////////////////////
///////////////////////
////input:2
/////output:HELLO
////////////HELLO