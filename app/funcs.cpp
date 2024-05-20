#include "funcs.hpp"

int32_t Sum(int16_t a, int16_t b)
{
   return a + b;
}

void SortArray(int ar[], size_t size_ar)
{
   for(int i = 0; i < size_ar - 1; i++)
   {
      for(int j = 0; j < size_ar - 1; j++)
      {
         if(ar[j] > ar[j+1])
         {
            int tmp = ar[j];
            ar[j] = ar[j+1];
            ar[j+1] = tmp;
         }
      }
   }
}