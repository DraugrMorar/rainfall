#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

char c[68];

void m(void)
{
  printf("%s - %d\n", c, time(0));
}

int main(int argc,char **argv)
{
  void *a = malloc(8); //0x804a008
  void *b = malloc(8); //0x804a018
  void *c = malloc(8); //0x804a028
  void *d = malloc(8); //0x804a038
  FILE *fs;
  strcpy(b, argv[1]);
  strcpy(d, argv[2]);
  fs = fopen("/home/user/level8/.pass","r");
  fgets(c, 68, fs);
  puts("~~");
  return 0;
}