#include <stdio.h>

int main()
{
  int i;
  int j;
  int counter;

  /* We can ignore numbers 1 to 10 because they are just 0.5 (10 to 20) */
  for (i = 10; i < 1000000000; i++)
  {
    counter = 0;
    for (j = 11; j < 21; j++)
    {
      if (i%j == 0)
        counter++;
    }

    if (counter == 10)
    {
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}