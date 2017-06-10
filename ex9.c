#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  while (i < 31) {
    if (i < 10){
      printf("0");
    }
    printf("%d ", i);

    if (!(i % 10)){
      printf("\n");
    }
    i++;
  }

  return 0;
}