#include <stdio.h>
#include <string.h>
#include <unistd.h>

static int	smt = 0;

int p(char *str)
{
    printf(str, str);
}

void n(void)
{
    char a[508];
    fgets(a, 508, stdin);
    smt = p(a);
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