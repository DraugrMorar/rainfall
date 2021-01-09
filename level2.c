#include <stdio.h>
#include <string.h>
#include <unistd.h>

void p(void)
{
    char a[64];
    void *str;

    fflush(stdout);
    gets(a);
    if(((unsigned long)str & 0xb0000000) == 0xb0000000)
    {
        printf("(%p)", str);
        _exit(1);
    }
    puts(a);
    strdup(a);
}

int main(void)
{
    p();
    return 0;
}