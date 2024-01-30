#include <stdio.h>
# include <stdbool.h>
# include <math.h>

bool kaprekar(int n)
{
    if (n == 1)
       return true;
    int sq = n * n;
    
    int digits = 0;
    while (sq>0)
    {
        digits++;
        sq/= 10;
    }
    sq=n*n;
    for (int i=1; i<digits; i++)
    {
         int eq_parts = pow(10, i);

        
         int sum = sq/eq_parts + sq % eq_parts;
         if (sum == n)
           return true;
    }
    return false;
}
int main()
{
int num;
  printf(" Input a number: ");
  scanf("%d",&num);
		  if (kaprekar(num)==true)
		  {
		   printf("%d is a Kaprekar number. \n",num);
		  }
		  else
		  {
		   printf("%d is not a Kaprekar number. \n",num);
		  }
}
