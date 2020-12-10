#include <stdio.h>
#include <string.h>
#include <unistd.h>

void n(void)
{
        system("/bin/cat /home/user/level3/.pass");
}

int main(void)
{
    n();
    return ;
}