#include "unp.h"

void sig_child(int signo)
{
    pid_t     pid;
    int       stat;

    pid = wait(&stat);
    printf("child %d terminated\n", pid);
    return;
}