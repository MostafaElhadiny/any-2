
#include <stdio.h>
#include <stdlib.h>

int main()
{

 int a, Numb, Sum = 0 ;

 printf("\n Please Enter any number \n") ;
 scanf("%d", &Numb) ;

 for(a = 1 ; a < Numb ; a++)
  {
   if(Numb % a == 0)
     Sum = Sum + a ;
  }

 if (Sum == Numb)
    printf("\n %d is a Perfect Number", Numb) ;
 else
    printf("\n%d is not the Perfect Number", Numb) ;

return 0 ;

}





