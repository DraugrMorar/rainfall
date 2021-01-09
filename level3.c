#include <stdio.h>
#include <stdlib.h>

int	m = 0;
void v(void)
{
    char a[512];

    fgets(a, 512, stdin);
    printf(a, 512);
    if(m == 64)
    {
    fwrite("Wait what?!\n", 1, 12, stdout);
    system("/bin/sh");
    }
}

int main(void)
{
    v();
    return 0;
}