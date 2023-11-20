#include <stdio.h>

int main(int _argc, char **_argv) {

  for(int x=1; x<=10; x++) {
    for(int y=1; y<=x; y++) {
      if(x + x * y + y == 54) {
        printf("x=%d, y=%d\n", x, y);
        goto quit;
      }
    }
  }
quit:
  return 0;
}
