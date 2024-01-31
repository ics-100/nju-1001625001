#include <stdio.h>

void main()
{
  union num
  {
    int a;
    char b;
  } num;

  num.a = 0x12 34 56 78
}