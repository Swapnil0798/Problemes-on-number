
#include"add.h"

///////////////////////
//Function name : addition
//Description : user to perform of 2 no
//Input  : integer,integer
//Output : integer
//Date : 12/04/2022
//Author : SWAPNIL SHIVAJI JAGTAP
///////////////////////////////


int addition(int no1,int no2)
{
    
    int ans=0;
    if(no1<0)
    {
    
        no1=-no1;
    }

    if(no2<0)
    {
        no2=-no2;
    }

    ans=no1+no2;
    
    return ans;
}
