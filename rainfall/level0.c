#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
    gid_t gid;
    uid_t uid;
    char *dash;
    if(atoi(argv[1]) == 423)
    {
        dash = strdup("/bin/sh");
        gid = getegid();
        uid = geteuid();
        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);
        execv(dash, NULL);
    }
    else
    {
        fwrite("No !\n", 1, 5, stderr);
    }
}