#include <stdio.h>

void main()
{
      char a, b, c, d;

      printf("ÇëÊäÈë´ý¼ìÑéÊý×Ö: ");
      scanf("%d", &a);
      b = a>>2;
      c = ~(~0<<4);
      d = b & c;

      printf("%d\n", d);
    
}