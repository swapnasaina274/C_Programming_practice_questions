#include <stdio.h>
int main()
{
  int n, i, v1 = 0, v2 = 1, v3;
  printf("Enter a number:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d,", v1); // 0,1,1,2,3,5
    v3 = v1 + v2;      // 1,2,3,5,8
    v1 = v2;           // 1,1,2,3,5
    v2 = v3;           // 1,2,3,5,8
  }

  return 0;
}