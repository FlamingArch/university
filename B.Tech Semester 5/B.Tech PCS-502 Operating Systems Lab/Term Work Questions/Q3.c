#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    int status;
    pid = fork();
    if (pid == 0)
    {
        printf("Child\n");
        exit(0);
    }
    else
    {
        wait(&status);
        printf("Parent\n");
        printf("Child PID: %d\n", pid);
    }
    return 0;
}