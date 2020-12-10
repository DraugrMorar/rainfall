#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
       printf(
           "         UID           GID  \n"
           "Real      %d  Real      %d  \n"
           "Effective %d  Effective %d  \n",
                getuid (),     getgid (),
                geteuid(),     getegid()
       );
setresuid(2030,2030,2030);
setresgid(2030,2030,2030);
       printf(
           "         UID           GID  \n"
           "Real      %d  Real      %d  \n"
           "Effective %d  Effective %d  \n",
                getuid (),     getgid (),
                geteuid(),     getegid()
       );
}