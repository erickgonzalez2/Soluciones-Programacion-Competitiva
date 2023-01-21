#include <stdio.h>

int main()
{
 int n;
 double a;
 double b;
 double c;

 scanf("%d", &n);

 for (int i = 0; i < n; i++)
 {
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  double med = ((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);

  printf("%.1lf\n", med);
 }

 return 0;
}
