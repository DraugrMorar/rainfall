#include <string.h>
#include <stdio.h>
#include <unistd.h>


void p(char *str1, char *str2)
{
    char buf[4069];

    puts(str2);
    read(0, buf, 4069);
    char *oui = strchr(buf, '\n');
    oui[0] = 0;
    strncpy(str1, buf, 20);
}

void pp(char *str)
{
    char str1[20];
    char str2[20];
    size_t i;
    p(str1," - ");
    p(str2," - ");
    strcpy(str, str1);
    i = strlen(str);
    str[i] = ' ';
    strcat(str, str2);
}

int main(void)
{
    char buf[42];

    pp(buf);
    puts(buf);
    return 0;
}