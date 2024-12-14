#include <stdio.h>
int main()
{

  int num[] = {2, 7, 11, 15, 7};
  int size = sizeof(num) / sizeof(num[0]);
  int target;
  printf("enter the target :\n");
  scanf("%d", &target);
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (num[i] + num[j] == target)
      {
        printf("[%d %d]", i, j);
      }
    }
  }
}