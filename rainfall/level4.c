#include <stdio.h>
#include <string.h>
#include <unistd.h>

static int	smt = 0;

void p(char *str)
{
    printf("%s", str);
}

void n(void)
{
    char a[508];

    fgets(a, 508, stdin);
    p(a);
    if(smt  == 16930116)
    {
        system("/bin/cat /home/user/level5/.pass");
    }
}

int main(void)
{
    n();
    return ;
}