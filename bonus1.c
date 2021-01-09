#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int     main(int ac, char **av)
{
    char        buf[40];
    int         n = atoi(av[1]);

    if (n > 9)
        return 1;
    memcpy(buf, av[2], n * 4);
    if (n == 0x574f4c46)
        execl("/bin/sh", "sh", NULL);
    return 0;
}