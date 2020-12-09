#include <stdio.h>
#include <string.h>
#include <unistd.h>

static int	smt = 0;
void v(void)
{
    char a[512];

    fgets(a, 512, stdin);
    printf("%p\n", str);
    if(smt == 64)
    {
    fwrite("Wait what?!\n", 1, 12, stdout);
    system("/bin/sh");
    }
}

int main(void)
{
    v();
    return ;
}