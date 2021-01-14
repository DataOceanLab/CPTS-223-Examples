#include "functions.h"

int recFactorial(int n)
{
   int result = 0;

   if (n == 0 || n == 1)
   {
      result = 1;
   }
   else if(n != 1)
   {
      result = n * recFactorial(n - 1);
   } 

   return result;
}