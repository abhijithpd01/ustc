                                                                       
#include<stdio.h>
 int main ()
{
  int a, b, i, sum = 0;
  printf ("enter a number\n");
  scanf ("%d", &a);
  b = a;
  for (i = 1; i < a; i++)
    {
      if (a % i == 0)
	{
	  sum += i;
	}
    }
  if (b == sum)
    {
      printf ("It is a perfect number");
    }
  else
    {
      printf ("It is not a perfect number");
    }

}
