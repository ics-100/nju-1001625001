#include <stdio.h>

int main()
{

  // 机器码: 1111 1111 1111 1111 1111 1111 1111 1111
  int x = -1;
  // 机器码: 1000 0000 0000 0000 0000 0000 0000 0000
  // 2^31: C90 unsigned / c99 long long
  unsigned u = 2147483648;
 
  printf("x = %u = %d\n", x, x);
  printf("u = %u = %d\n", u, u);

  if(-2147483648 < 2147483647){
    printf("-2147483648 < 2147483647 is true\n");
  }else{
    printf("-2147483648 < 2147483647 is false\n");
  }

  if(-2147483648 -1 < 2147483647){
    printf("-2147483648-1 < 2147483647 \n");
  }else if(-2147483648 -1 == 2147483647){
    printf("-2147483648 == 2147483647 \n");
  }else{
    printf("-214748364-1 > 2147483647 \n");
  }
}