#include <stdio.h>
#include <stdlib.h>

static int	m = 0;

int p(char *str)
{
    printf(str, str);
}

void n(void)
{
    char a[508];
    fgets(a, 508, stdin);
    m = p(a);
    if(m  == 16930116)
    {
        system("/bin/cat /home/user/level5/.pass");
    }
}

int main(void)
{
    n();
    return 0;
}