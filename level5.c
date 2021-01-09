#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int m = 0;
void o(char *str)
{
    system("/bin/sh");
    _exit(1);
}

void n(void)
{
    char a[508];

    fgets(a, 508, stdin);
    printf(a, 512);
    exit(0);
}

int main(void)
{
    n();
    return ;
}