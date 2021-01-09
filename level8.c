#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *auth = NULL;
char *service = NULL;

int main(void)
{
  char input[128];

  while(1)
  {
    printf("%p, %p \n", auth, service);
    if (fgets(input, 128, stdin) == NULL)
      break;
    if (strncmp(input, "auth ", 5) == 0)
    {
      auth = (char *)malloc(4);
      char *name = (input + 5);

      if (strlen(name) <= 30)
        strcpy(auth, name);
    }
    if (strncmp(input, "reset", 5) == 0)
    {
      if (auth)
        free(auth);
    }
    if (strncmp(input, "service", 6) == 0)
    {
        service = strdup(input + 7);
    }
    if (strncmp(input, "login", 5) == 0)
    {
      if ((&auth + 32) == &service)
        system("/bin/sh");
      else
        fwrite("Password:\n", 1, 10, stdout);
    }
  }
  return 0;
}
