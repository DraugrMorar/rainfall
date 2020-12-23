#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void m(void)
{
    puts("Nope");
    return ;
}

void n(void)
{
    system("/bin/cat /home/user/level7/.pass");
    return ;
}

int main(void)
{
 char *s;
  void (*f)(void);

  s = (char *)malloc(64);
  f = (void **)malloc(4);

  *f = m;
  strcpy(s, argv[1]);

  f();
    return ;
}