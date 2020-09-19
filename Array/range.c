#include <stdio.h>
#include<limits.h>


int
main ()
{
  int len;
  printf ("Enter the length of the array: ");
  scanf ("%d", &len);
  int arr[len];
  int i;
  printf ("Enter the numbers\n");
  for (i = 0; i < len; i++)
    {
      scanf ("%d", &arr[i]);
    }
  int min = INT_MAX, max = INT_MIN;
  int j;
  for (j = 0; j < len; j++)
    {
      if (arr[j] > max)
	{
	  max = arr[j];
	}
      if (arr[j] < min)
	{
	  min = arr[j];
	}
    }
  int ans = max - min;
  printf ("The range of the array is %d", ans);
  return 0;
}