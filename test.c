#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    char a[512];

    fgets(a, 512, stdin);
    printf(a, 512);
    return 1;
}


